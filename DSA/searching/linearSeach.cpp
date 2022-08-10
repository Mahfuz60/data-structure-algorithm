#include <bits/stdc++.h>
using namespace std;

int main()
{
  int size;
  cout << "enter your input size:";
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  char c;
  cout << "Do you want to search(Y/N):";
  cin >> c;
  while (toupper(c) == 'Y')
  {
    int checkValue;
    cout << "check your searching value:";
    cin >> checkValue;
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
      if (arr[i] == checkValue)
      {
        cout << "Index No:" << i << ",  postion:" << i + 1 << endl;
        flag = 1;
      }
    }
    if (flag == 0)
    {
      cout << "Index Not found!" << endl;
    }

    cout << "Do you want to search continue(Y/N):";
    cin >> c;
  }

  return 0;
}