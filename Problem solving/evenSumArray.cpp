#include <bits/stdc++.h>
using namespace std;

int printArray(int n, int arr[])
{
  int sum = 0;
  for (int i = 0; i < n; i = i + 2)
  {
    sum += arr[i];
  }
  cout << sum << endl;
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

  printArray(n, arr);

  return 0;
}