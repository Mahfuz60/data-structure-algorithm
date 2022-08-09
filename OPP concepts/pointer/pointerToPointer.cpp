#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a = 100;
  int *p = &a;
  int **q = &p;
  cout << "A address is:" << &a << endl
       << "A value is:" << a << endl;
  cout << "P address is:" << &p << endl
       << "P value is:" << p << endl;
  cout << "Q address is:" << &q << endl
       << "Q value is:" << q << endl;

  return 0;
}