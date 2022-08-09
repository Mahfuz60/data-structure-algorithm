#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
  int x;

private:
  int y;

protected:
  int z;
};

int main()
{
  Student tkr;
  tkr.x = 10;
  // tkr.y = 20; // not a access because it is private
  // tkr.z = 50; // not a access because it is protected
  cout << tkr.x << endl;
  // cout << tkr.y << endl;
  // cout << tkr.z << endl;

  return 0;
}