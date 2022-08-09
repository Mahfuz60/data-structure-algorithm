#include <bits/stdc++.h>
using namespace std;

// function overloading

class Example
{
public:
  int add(int x, int y)
  {
    cout << "first one" << endl;
    return x + y;
  }
  double add(double x, double y)
  {
    cout << "second one" << endl;
    return x + y;
  }
  void add(char a)
  {
    cout << "Hi  " << a << endl;
  }
};

int main()
{

  Example ex;
  cout << ex.add(1.5, 2.5) << endl;
  cout << ex.add(5, 4) << endl;
  ex.add('z');
  return 0;
}