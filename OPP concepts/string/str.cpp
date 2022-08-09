#include <bits/stdc++.h>
using namespace std;
int main()
{
  string st; // dynamic array ar moto kaj kore thake
  // cin >> st;
  // cout << st.capacity() << endl;
  // cout << st.max_size() << endl;
  // cout << st << endl;

  string s(10, 'a'); // like a work in constuctor
  // cout << s << endl;

  string st1 = "Hello";
  string st2 = "world";
  // st1 = st2;
  // cout << st1 << endl;
  if (st1 == st2)
  { // compare the two string
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  string n = st1 + st2; // add two string
  // cout << n << endl;

  return 0;
}