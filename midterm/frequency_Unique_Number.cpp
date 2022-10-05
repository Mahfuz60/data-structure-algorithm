#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr_size, max_Number = 0;
  cout << "Enter your input:";
  cin >> arr_size;
  int arr[arr_size] = {0};
  for (int i = 0; i < arr_size; i++)
  {
    cin >> arr[i];
    if (arr[i] > max_Number)
    {
      max_Number = arr[i];
    }
  }
  int feq_arr[max_Number + 1] = {0};
  for (int i = 0; i < arr_size; i++)
  {
    feq_arr[arr[i]]++;
  }
  for (int i = 0; i < arr_size; i++)
  {
    if (feq_arr[arr[i]] > 0)
    {
      cout << arr[i] << "=>" << feq_arr[arr[i]] << endl;
    }
    feq_arr[arr[i]] = 0;
  }

  return 0;
}