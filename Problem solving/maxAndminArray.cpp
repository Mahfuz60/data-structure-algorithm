#include <bits/stdc++.h>
using namespace std;

int maxAndMin(int n, int arr[])
{
  int max = arr[0];
  int min = arr[0];
  int maxIn = 0;
  int minIn = 0;

  for (int i = 0; i < n; i++)
  {

    if (arr[i] > max)
    {
      max = arr[i];
      maxIn = i;
    }
    else if (min < arr[i])
    {
      min = arr[i];
      minIn = i;
    }
  }
  cout << "Max:" << max << ", Index:" << maxIn << endl;
  cout << "Min:" << min << ", Index:" << minIn << endl;
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  maxAndMin(n, arr);

  return 0;
}