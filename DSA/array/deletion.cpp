#include <bits/stdc++.h>
using namespace std;

void printArray(int ar[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << ar[i] << " ";
  }
  cout << endl;
}

int main()
{
  int ar[50];
  int size;
  cout << "enter your size:";
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    cin >> ar[i];
  }

  cout << "given array:" << endl;

  printArray(ar, size);

  int pos, value;
  cout << "Position of deletion index:";
  cin >> pos;
  if (pos < 0 || pos > size - 1)
  {
    cout << "invalid index";
  }
  if (pos == size - 1) // last position
  {
    size--;
  }

  else
  {
    // first or middle position
    for (int i = pos + 1; i < size; i++)
    {
      ar[i - 1] = ar[i];
    }
    size--;
  }

  cout << "After array of the Deletion: ";
  printArray(ar, size);

  return 0;
}