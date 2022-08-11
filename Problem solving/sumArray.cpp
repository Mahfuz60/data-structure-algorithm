#include <bits/stdc++.h>
using namespace std;

int printArray(int n, int arr[])
{
  int sum = 0;

  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }
  cout << sum;
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
  int sum = 0;
  cout << "sum of the array:" << endl;
  printArray(n, arr);

  return 0;
}