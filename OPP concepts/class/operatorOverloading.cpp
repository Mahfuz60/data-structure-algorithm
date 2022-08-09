#include <bits/stdc++.h>
using namespace std;

class Example
{
public:
  int x;
  Example(int a) // constructor
  {
    x = a;
  }
  Example operator+(Example obj) // operator overloading
  {
    Example ans(0);
    ans.x = x + obj.x;
    return ans;
  }
};

int main()
{
  Example a(20), b(30), c(40);
  Example ans = a + b;
  Example ans2 = ans + c;
  cout << ans.x << endl;
  cout << ans2.x << endl;
  return 0;
}