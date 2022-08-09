#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a, b;
  cout << "enter your value:";
  cin >> a >> b;
  if (a > b)
  {
    cout << "A is greater" << endl;
  }
  else if (b > a)
  {
    cout << "B is greater" << endl;
  }
  else
  {
    cout << "A and B are equal" << endl;
  }
  return 0;
}