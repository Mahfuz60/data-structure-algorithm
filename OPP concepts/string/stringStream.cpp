#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s = "aa bb cc dd   ee  xx  yy  zz";
  stringstream stream;
  stream << s; // entry string

  string w;
  while (stream >> w) // ber korar way
  {
    cout << w << endl;
  }

  return 0;
}