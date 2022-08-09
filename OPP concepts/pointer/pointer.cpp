#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a = 10;
  cout << "address:" << &a << "  value:" << a << endl;
  int *p = &a;
  cout << "pointer address:" << &p << endl
       << "pointer   value:" << p << endl;
  cout << "vlaue of pointer  address is:" << *p << endl;

  return 0;
}