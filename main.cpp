#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <cstring>
#include "graph.hpp"


using namespace std;
 
int main(int argc, char *argv[])
{
  ifstream ip(argv[1]);

  if(!ip.is_open())
  {
    std::cout << "ERROR: File Open" << '\n';
  }

  string dest;
  int dest1 = 0;
  string n_verticles;
  int V;

  getline(ip, n_verticles, '\n');
  V = stoi(n_verticles);
  struct Graph graph = Graph(V, V);
  int src = 1;
  while(ip.good()){    
    dest.clear();
    getline(ip, dest,'\n');

    if(dest.empty())
    {
      break;
    }
    dest1 = stoi(dest);
    graph.addEdge(src, dest1, 0);
    src++;
  }
  
  ip.close();

  graph.find_c();
  cout<<endl;

	return 0;
}