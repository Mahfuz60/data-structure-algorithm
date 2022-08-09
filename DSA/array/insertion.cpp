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
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    cin >> ar[i];
  }

  cout << "given array:" << endl;

  printArray(ar, size);

  // insertion array
  int pos, value;
  cout << "position of insrrtion index" << endl;
  ;
  cin >> pos;
  cout << "value of insertion " << endl;
  cin >> value;
  if (pos < 0 || pos > size)
  {
    cout << "Invaild index" << endl;
  }
  else
  {
    //nth time swap of array
  //   for (int i = size - 1; i >= pos; i--)
  //   {
  //     ar[i + 1] = ar[i];
  //   }

  //   ar[pos] =value;
  
  //exchange size--->pos
  //1 time swap
  ar[size]=ar[pos];
  ar[pos]=value;
  }
  cout << "array after the insertion" << endl;
  printArray(ar, size + 1);

  return 0;
}