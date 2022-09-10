#include <bits/stdc++.h>
#include "myStack.h"
using namespace std;
int main()
{
  /*
  Stack<int> st;

  st.push(3);
  st.push(4);
  st.push(5);
  */

  /*
    Stack<string> st;

    st.push("Mahfuz Alam");
    st.push("Ahmed Hridoy");
    st.push("Taki Kauser");
    st.push("Tkr Chamak");
    */

  /*
    while (!st.empty())
    {
      cout << st.pop() << endl;
    }
    cout << "size:" << st.size() << endl;
    if (!st.empty()) // st.Top()  != -1
    {
      cout << "top:" << st.Top() << endl;
    }
  */

  // Pair data type
  Stack<pair<int, char>> st;
  st.push(make_pair(1, 'a'));
  st.push(make_pair(2, 'b'));
  st.push(make_pair(3, 'c'));
  st.push(make_pair(4, 'd'));

  while (!st.empty())
  {
    pair<int, char> chk;
    chk = st.pop();
    cout << chk.first << "|" << chk.second << endl;
  }

  cout << "size:" << st.size() << endl;
  if (!st.empty()) // st.Top()  != -1
  {
    pair<int, char> chk;
    chk = st.Top();
    cout << chk.first << "|" << chk.second << endl;
  }

  return 0;
}