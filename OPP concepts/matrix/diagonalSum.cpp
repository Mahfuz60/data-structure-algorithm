#include <bits/stdc++.h>
using namespace std;
int main()
{
  int row, col;
  cout << "enter your row and col value:"<<endl;;
  cin >> row >> col;
  int a[row][col];

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> a[i][j];
    }
  }
  int sum = 0;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {

      if (i == j)
      {
        sum = sum + a[i][j];
      }
    }
  }
  cout << "sum is:" << sum << endl;

  return 0;
}