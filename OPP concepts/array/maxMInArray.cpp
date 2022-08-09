#include <bits/stdc++.h>
using namespace std;
int main()
{
  int ar[6] = {2, 5, 0, -8, 10, 7};
  int max = ar[0];
  int min = ar[0];
  for (int i = 1; i < 6; i++)
  {
    int val = ar[i];
    if (val > max)
    {
      max = val;
    }
    else if (val < min)
    {
      min = val;
    }
  }
  cout << "max:" << max << endl;
  cout << "mix:" << min << endl;
  return 0;
}