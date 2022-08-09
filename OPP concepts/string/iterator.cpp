#include <bits/stdc++.h>
using namespace std;
int main()
{

  string st = "HelloBangladesh";
  string::iterator it; // forward iterator
  for (it = st.begin(); it != st.end(); it++)
  {

    cout << *it << " ";
  }
  cout << endl;
  // reverser iterator
  string s = "Iammahfuzalam";
  string::reverse_iterator ita;
  for (ita = s.rbegin(); ita != s.rend(); ita++)
  {
    cout << *ita << " ";
  }
  cout << endl;

  // automatic iterator
  string sa = "tourdiaashichol";
  for (auto i = sa.begin(); i != sa.end(); i++)
  {
    cout << *i << " ";
  }
  return 0;
}