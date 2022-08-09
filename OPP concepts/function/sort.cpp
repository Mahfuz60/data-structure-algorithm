#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a[6] = {5, 4, 8, 10, 6, 3};
  int n = 6;

  sort(a, a + n);
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }

  return 0;
}