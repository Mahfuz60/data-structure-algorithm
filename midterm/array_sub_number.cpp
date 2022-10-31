#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, m;
  cout << "enter input(N):";
  cin >> n;
  int N_arr[n] = {0};
  for (int i = 0; i < n; i++)
  {
    cin >> N_arr[i];
  }
  cout << "enter input(M):";
  cin >> m;
  int M_arr[m] = {0};
  for (int i = 0; i < m; i++)
  {
    cin >> M_arr[i];
  } 

  for (int i = 0; i < n; i++)
  {
    int flag = 0;
    int curr_Num = N_arr[i];
    for (int j = 0; j < m; j++)
    {
      if (curr_Num == M_arr[i])
      {     
        flag = 1;
      }
    }
    if (curr_Num == 0)
    {
      cout << curr_Num << " ";
    }
  }

  return 0;
}