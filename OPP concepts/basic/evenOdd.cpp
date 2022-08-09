#include <bits/stdc++.h>
using namespace std;
int main()
{
  int x;
  cout << "enter the value:";
  cin >> x;
  if (x % 2 == 0)
  {
    // cout << "Even" << endl;
    if (x < 10)
    {
      cout << "Even and less than 10" << endl;
    }
    else
    {
      cout << "Even and greater than equal 10" << endl;
    }
  }
  else
  {
    cout << "Odd" << endl;
  }

  return 0;
}