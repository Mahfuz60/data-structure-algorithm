#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;
  int meal = 800;
  int payBack = 200;

  int x = N * meal;
  int y = (N / 15) * payBack;
  int result = x - y;
  cout << result << endl;
  return 0;
}