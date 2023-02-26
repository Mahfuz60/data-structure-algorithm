#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> edgeWeightPair;
class Graph
{
  int V;
  list<edgeWeightPair> *adj;

public:
  Graph(int V)
  {
    this->V = V;
    adj = new list<edgeWeightPair>[V];
  }

  void addEdge(int u, int v, int w)
  {
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
  }

  void printNeighbour(int chk)
  {

    cout << chk << ":";
   

    for (auto i = adj[chk].begin(); i != adj[chk].end(); i++)
    {
      cout << "(" << (*i).first << " ," << (*i).second << ")";
    }
    cout << endl;
  }
  // Breadth First Search
  void BFS(int source)
  {
    vector<bool> visited(V, false);
    queue<int> Q;
    visited[source] = true;
    Q.push(source);
    while (!Q.empty())
    {
      int u = Q.front();
      cout << u << " ";
      Q.pop();
      for (auto element : adj[u])
      {
        int v = element.first;
        if (visited[v] != true)
        {
          visited[v] = true;
          Q.push(v);
        }
      }
    }
  }
};

int main()
{
  int V, E, source;
  cin >> V >> E >> source;
  Graph grp(V);
  for (int i = 0; i < E; i++)
  {
    int u, v, w;
    cin >> u >> v >> w;
    grp.addEdge(u, v, w);
  }

  for (int i = 0; i < V; i++)
  {
    grp.printNeighbour(i);
    cout << endl;
  }

  cout << endl
       << endl;
  grp.BFS(source);
  cout << endl
       << endl;

  return 0;
}

// Bi-Directional weighted graph
/*
7 10 0
0 1 7
0 2 1
0 5 3
1 3 11
2 5 8
3 2 3
3 6 1
6 5 2
6 4 4
4 5 6

*/

// output
/*
0:(1 ,7)(2 ,1)(5 ,3)

1:(0 ,7)(3 ,11)

2:(0 ,1)(5 ,8)(3 ,3)

3:(1 ,11)(2 ,3)(6 ,1)

4:(6 ,4)(5 ,6)

5:(0 ,3)(2 ,8)(6 ,2)(4 ,6)

6:(3 ,1)(5 ,2)(4 ,4)

*/