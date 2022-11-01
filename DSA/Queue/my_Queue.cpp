#include <bits/stdc++.h>
using namespace std;

// create Node
class Node
{
  int value;
  int next;

public:
  // constructor
  Node(int val)
  {
    value = val;
    next = NULL;
  }
};

// create Queue
class Queue
{
  Node *front;
  Node *rear;

public:
  // constructor
  Queue()
  {
    front = NULL;
    rear = NULL;
  }

  // enqueue --->push(val)
  void push(int val)
  {

    Node *newNode = new Node(val);
    if (front == NULL)
    {

      front = newNode;
      rear = newNode;
    }

    rear->next = newNode;
    rear = rear->next;
  }

  // dequeue---->pop()

  // peak---->front() and back()

  // empty--->empty()
};

int main()
{

  return 0;
}