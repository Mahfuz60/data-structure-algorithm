#include <bits/stdc++.h>
using namespace std;

class Example
{

public:
  int x, y, z;
  Example(int a, int b, int c)
  {
    x = a;
    y = b;
    z = c;
  }
};
int main()
{
  Example A(100, 200, 300);
  cout << A.x << " " << A.y << " " << A.z << endl;

  return 0;
}