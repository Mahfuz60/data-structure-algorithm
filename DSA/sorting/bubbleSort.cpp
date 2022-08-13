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

  for (int i = 0; i < n; i++)

  {
    for (int j =0; j < n -i-1; j++)
    {
      if (arr[j] > arr[j + 1]) // ascending order(arr[j] > arr[j+1]) and desending order:(arr[j] < arr[j+1])
      {

        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;

        // or
        //  swap(arr[j], arr[j+1]);
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