#include <bits/stdc++.h>
#include "MYSTACK.h"
using namespace std;
int main()
{
  Stack st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);

  while (!st.empty())
  {
    cout << st.pop() << endl;
  }
  cout << "size:" << st.size() << endl;
  if (!st.empty()) // st.Top()  != -1
  {
    cout << "top:" << st.Top() << endl;
  }
  return 0;
}