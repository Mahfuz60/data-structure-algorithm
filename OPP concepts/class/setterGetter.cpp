#include <bits/stdc++.h>
using namespace std;

class Person
{
private:
  int salary;
  int pass; // 1234

public:
  Person(int p) // constructor
  {
    pass = p;
  }
  void setter(int x, int p)
  {
    if (pass == p)
    {
      salary = x;
    }
    else
    {
      cout << "Password didnot matched!setter" << endl;
    }
  }
  int getter(int p)
  {
    if (pass == p)
    {
      return salary;
    }
    else
    {
      cout << "Password didnot matched!getter" << endl;
      return -1;
    }
  }
};

int main()
{
  Person rafsan(1234);
  rafsan.setter(30000, 1234);
  cout << rafsan.getter(1234) << endl;

  return 0;
}
