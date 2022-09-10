#include <bits/stdc++.h>
using namespace std;

template <typename T>
T myMax(T a, T b)
{
  return (a > b) ? a : b;
}

int main()
{

  // functionName<DataType>(parameter)
  cout << myMax<int>(10, 12) << endl;
  cout << myMax<float>(5.5, 7.5) << endl;
  cout << myMax<char>('a', 'b') << endl;

  return 0;
}