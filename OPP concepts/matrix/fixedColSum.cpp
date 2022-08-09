#include <bits/stdc++.h>
using namespace std;
int main()
{
  int row, col;
  cin >> row >> col;
  int a[row][col];
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> a[i][j];
    }
  }
  int req_col;
  cin >> req_col;
  int sum=0;
  for (int i = 0; i < row; i++)
  {
    sum=sum+a[i][req_col];
  }
  cout<<sum<<endl;

  return 0;
}