#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i]; 
  }
  map<int, int> mp;
  for (int i = 0; i < n; i++)
  {
    mp[arr[i]]++;
  }
  map<int, int>::iterator it;
  for (it = mp.begin(); it != mp.end(); it++)
  {
    cout << it->first << " =" << it->second << endl;
    
  }

  return 0;
}

/*
input:
11
2 1 1 2 2 3 4 9 4 3 5
output:
1 =2
2 =3
3 =2
4 =2
5 =1
9 =1


*/