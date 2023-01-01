#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,arr;
  cin >> n;
  for (int i = 2; i <= n; i++)
  {
    if (i % 2 == 0)
    {
      break;
    }
    if (i % 2 != 0)
    {
      cout << i;
    }
  }

  return 0;
}