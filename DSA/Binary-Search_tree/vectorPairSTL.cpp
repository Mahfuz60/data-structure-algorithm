#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int>PAIR;



int main()
{
  vector<int> V(3, -1);
  for (int i = 0; i < V.size(); i++)
  {
    cout << V[i] << " ";
  }

  cout << endl
       << endl;

  V.push_back(4);
  // iterator
  vector<int>::iterator it; // it=>(is a vector pointer)
  for (it = V.begin(); it != V.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl
       << endl;

  // auto register in range based traversal
  for (auto element : V)
  {
    cout << element << " ";
  }
  cout << endl
       << endl;

  // auto register in place of iterator
  for (auto it = V.begin(); it != V.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl
       << endl;

  // Vector Standard Template Libary
  // Maximum Priority Queue
  priority_queue<int, vector<int>> PQ;
  PQ.push(2);
  PQ.push(4);
  PQ.push(6);
  PQ.push(9);
  while (!PQ.empty())
  {
    cout << PQ.top() << endl;
    PQ.pop();
  }
  cout << endl
       << endl;

  // Minimum Priority Queue
  priority_queue<int, vector<int>, greater<int>> Pq;
  Pq.push(12);
  Pq.push(2);
  Pq.push(0);
  Pq.push(-3);
  Pq.push(5);
  while (!Pq.empty())
  {
    cout << Pq.top() << endl;
    Pq.pop();
  }
  cout << endl
       << endl;

  // Priority_queue Pair
priority_queue<PAIR, vector<PAIR>, greater<PAIR>> PA;
 PA.push(make_pair(1,4));
 PA.push(make_pair(3,5));
 PA.push(make_pair(6,2));
 PA.push(make_pair(4,3));

  while (!PA.empty()){
    cout << PA.top().first << "|" << PA.top().second << endl;
    PA.pop();
  }
  cout << endl
       << endl;

  return 0;
}