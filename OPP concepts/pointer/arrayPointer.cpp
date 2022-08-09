#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a[5] = {10, 20, 30, 40, 50};
  int *ptr = a;

  for (int i = 0; i < 5; i++)
  {
    cout << *ptr << endl;
    ptr++;
  }

  return 0;
}