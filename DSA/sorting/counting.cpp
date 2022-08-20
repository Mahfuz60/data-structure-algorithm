#include <bits/stdc++.h>
using namespace std;

void printArray(int array[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << array[i] << " ";
  }
  cout << endl;
}
int main()
{
  int size;
  cin >> size;
  int array[size];
  for (int i = 0; i < size; i++)
  {
    cin >> array[i];
  }

  cout << "Before Sorting:" << endl;
  printArray(array, size);
  // step-1:Finding Max Number
  int max = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    if (array[i] > max)
    {
      max = array[i];
    }
  }
  // step -2:Initailization "Count" Array
  int count[max + 1];
  for (int i = 0; i <= max; i++)
  {
    count[i] = {0};
  }
  // step-3:Calculate the frequency Number
  for (int i = 0; i < size; i++)
  {
    count[array[i]]++;
  }
  cout << "Frequency Number:" << endl;
  printArray(count, max + 1);

  // step-4:cumulative sum
  for (int i = 1; i <= max; i++)
  {
    count[i] = count[i] + count[i - 1];
  }

  cout << "Cumulative Sum:" << endl;
  printArray(count, max + 1);

  // step-5:Final array--->backward traversal of basic array
  int final[size];
  for (int i = size - 1; i >= 0; i--)
  {
    count[array[i]]--;
    int k = count[array[i]];
    final[k] = array[i];
  }

  cout << "After sorting:" << endl;
  printArray(final, size);

  return 0;
}