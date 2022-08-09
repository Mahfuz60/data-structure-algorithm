#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[6] = {4, 3, 5, 10, 1, 6};
  int mx = arr[0];
  for (int i = 1; i < 6; i++)
  {
    mx = max(mx, arr[i]);
    cout << "index:" << arr[i] << " " << mx << endl;
  }

  return 0;
}