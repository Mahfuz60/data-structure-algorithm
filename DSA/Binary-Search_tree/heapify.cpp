#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void heafify(int arr[], int n, int current)
{

  int largest = current;
  int leftChild = 2 * current + 1;
  int rightChild = 2 * current + 2;

  if (leftChild < n && arr[leftChild] > arr[largest])
  {
    largest = leftChild;
  }
  if (rightChild < n && arr[rightChild] > arr[largest])
  {
    largest = rightChild;
  }

  if (largest != current)
  {
    swap(arr[current], arr[largest]);
    heafify(arr, n, largest);
  }
}

void printHeafify(int arr[], int size)
{
  cout << endl;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i];
  }
  cout << endl;
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  cout << "Before Heafify:";
  printHeafify(arr, n);

  // Heapify
  int nonLeafStart = (n / 2) - 1;
  for (int i = nonLeafStart; i >= 0; i--)
  {
    heafify(arr, n, i);
  }

  cout << endl;

  cout << "After Heafify:";
  printHeafify(arr, n);

  return 0;
}

/*
input:
9
2 10 1 5 4 8 3 8 7

*/
