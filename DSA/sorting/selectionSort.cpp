#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  cout << endl;
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
  cout << endl;
  cout << "before sorting" << endl;
  printArray(arr, n);
  cout << endl;

  // seelection sort implemantation
  for (int i = 0; i < n; i++)
  {
    for (int j =i+1; j < n; j++)
    {
      if (arr[i] > arr[j])
      {
        
         int temp=arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  cout << "After Selection Sort" << endl;
  printArray(arr, n);

  return 0;
}