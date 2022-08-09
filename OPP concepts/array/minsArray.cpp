#include <bits/stdc++.h>
using namespace std;
int main()
{
  int ar[5] = {4, 3, 6, 2, 10};
  int mn = ar[0];
  for (int i = 1; i < 5; i++)
  {
    mn = min(mn, ar[i]);
    // cout << "index:" << ar[i] << " "
    //      << "minumum:" << mn << endl;
  }
  cout << mn << endl;

  return 0;
}