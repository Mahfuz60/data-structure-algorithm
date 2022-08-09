#include <bits/stdc++.h>
using namespace std;
int main()
{
  int ar[] = {2, 5, 4, 6, 10, 20, 8, 11, 7, 9}, n = 10;
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (ar[i] > ar[j])
      {
        // int temp = ar[i];
        // ar[i] = ar[j];
        // ar[j] = temp;

        
        swap(ar[i], ar[j]);
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << ar[i] << " ";
  }

  return 0;
}