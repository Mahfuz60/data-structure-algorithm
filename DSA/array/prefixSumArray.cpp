#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[5] = {5, 4, 6, 7, 10};
  int prefix[5];
  prefix[0] = arr[0];
  for (int i = 1; i < 5; i++)
  {
    prefix[i] = arr[i] + prefix[i - 1];
  }
  for (int i = 0; i < 5; i++)
  {
    cout << prefix[i] << " ";
  }
  return 0;
}

