#include <bits/stdc++.h>
using namespace std;
int main()
{

  string st = "MahfuzAlam"; // dynamic array
  // cout<<st.length()<<endl;
  cout << st << endl;
  cout << "size:" << st.size() << endl;

  // string resize
  st.resize(6);
  cout << st << endl;
  cout << "resize:" << st.size() << endl;

  // string clear
  st.clear();
  cout << "clear:" << st.size() << endl;

  // check string empty
  if (st.empty())
  {
    cout << "yes" << endl;
  }
  else
  {
    cout << "no" << endl;
  }

  return 0;
}