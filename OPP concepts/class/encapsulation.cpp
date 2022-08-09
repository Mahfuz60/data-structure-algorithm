#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
  int x;
  void sayHi()
  {
    cout << "Hi " << x << endl;
  }
};

int main()
{
  Student s1;
  s1.x = 500;
  s1.sayHi();

  return 0;
}