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

  cout << "Before sort" << endl;
  printArray(arr, n);
  cout << endl;

  // Bubble sort implemantaion
  for (int i =0; i < n; i++)
   
  {
    for (int j = i+1; j < n; j++)
    {
      if (arr[i] > arr[j]) // ascending order(arr[i] > arr[j]) and desending order:(arr[i] < arr[j])
      {
        int temp;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        // or
        //  swap(arr[i], arr[j]);
      }
    }
  }
  cout << "After sort" << endl;
  printArray(arr, n);

  return 0;
}

// output
// n= 10
//  14 2 50 100 5 30 40 80 20 10
//  Before sort
//  14 2 50 100 5 30 40 80 20 10
//  After Bubble sort
//  2 5 10 14 20 30 40 50 80 100