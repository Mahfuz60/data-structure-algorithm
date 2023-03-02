#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<int, int> mp;
  mp[4] = 10;
  mp[2] = 4;
  mp[5] = 12;
  mp.insert(make_pair(1, 3));
  mp.insert(make_pair(3, 33));
  mp.insert(make_pair(10, 3));

cout<<"key"<<"|"<<"value"<<endl;
  for (auto i : mp)
  {
    cout << i.first << " |" << i.second << endl;
  }

  return 0;
}