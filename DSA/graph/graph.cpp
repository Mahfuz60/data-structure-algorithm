#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int>edgeWeightPair;
class Graph{
  int V;
  list <edgeWeightPair>*adj;

  public:
  Graph(int V){
    this->V=V;
    adj=new list<edgeWeightPair>[V];
  }
}

int main(){
  int V,E;
  cin>>V>>E;
  for(int i=0;i<E;i++){
    int u,v,w;
    cin>>u>>v>>w;

  }




  return 0;
}