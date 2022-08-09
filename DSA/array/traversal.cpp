#include <bits/stdc++.h>
using namespace std;

void printArray(int ar[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << ar[i] << " ";
  }
  cout<<endl;
}

int main()
{
  int ar[10];
  int size;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    cin >> ar[i];
  }

  cout << "given array:" << endl;

  printArray(ar, size);

  return 0;
}