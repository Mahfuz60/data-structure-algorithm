#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int x, int lb, int ub)
{
  if (lb <= ub)
  {
    int mid = (lb + ub) / 2;

    // x==arr[MID]
    if (x == arr[mid]) // center position
    {
      return mid;
    }
    // x>arr[MID]
    else if (x > arr[mid]) // rignt site position
    {
      binarySearch(arr, x, mid + 1, ub);
    }

    // x<arr[MID]
    else if (x < arr[mid]) // left site position
    {
      binarySearch(arr, x, lb, mid - 1);
    }
  }
  else
  {
    return -1;
  }
}

int main()
{

  int size;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  int checkValue;
  cout << "Enter the value you want to search:";
  cin >> checkValue;
  int indexNumber = binarySearch(arr, checkValue, 0, size - 1);

  if (indexNumber != -1)
  {
    cout << "Index No: " << indexNumber << " Position No: " << indexNumber + 1 << endl;
  }
  else
  {
    cout << "Not Found this value!" << endl;
  }

  return 0;
}
// 2 5 8 12 16 23 38 56 71 92