#include <bits/stdc++.h>
using namespace std;
int main()
{
  int X, t;
  cin >> X >> t;
  int result = 0;
  if (X > t)
  {
    result = X - t;
    cout << result << endl;
  }
  else
  {
    if (X < t)
    {
      cout << result << endl;
    }else if(X==t){
      cout<<result<<endl;

    }
  }

  return 0;
}