#include <bits/stdc++.h>
using namespace std;

int reverseArray(int n, int arr[])
{

  for (int i = n-1; i>=0; i--)
  {
    cout << arr[i]<<" ";
  }
};

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  reverseArray(n, arr);

  return 0;
}