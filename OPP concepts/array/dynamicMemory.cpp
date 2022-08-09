#include <bits/stdc++.h>
using namespace std;
int main()
{
  int *ptr = new int[10]{1, 5, 5, 8, 40, 90, 52, 10}; //Heap  dynamic memory allocation
  for (int i = 0; i < 10; i++)
  {

    cout << ptr[i] << endl;
  }
  delete ptr; // same to c language free function

  return 0;
}