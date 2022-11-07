#include <bits/stdc++.h>
using namespace std;

// create Node
template<typename N> class Node
{
public:
  N value;
  Node *next;

  // constructor
  Node(N val)
  {
    value = val;
    next = NULL;
class Node
{
  int value;
  int next;

public:
  // constructor
  Node(int val)
  {
    value=val;
    next =NULL;
  }
};

// create Queue
template <typename Q> class Queue
{

  Node <Q> *front;
  Node <Q> *rear;
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
  void push(Q val)
  {

    Node <Q> *newNode = new Node <Q>(val);
  void push(int val)
  {

    Node *newNode = new Node(val);
    if (front == NULL)
    {

      front = newNode;
      rear = newNode;
      return;
    }

    rear->next = newNode;
    rear = rear->next;
  }

  // dequeue---->pop()
  Q pop()
  {
    Q chk ;
  int pop()
  {
    int chk = -1;
    if (rear == NULL)
    {
      cout << "Queue is underflow and There is no element in queue" << endl;
      return chk;
    }

    Node<Q> *delNode;
    Node *delNode;
    delNode = front;
    front = front->next;
    if (front == NULL)
    {
      rear = NULL;
    }
    chk = delNode->value;
    delete delNode;
    return chk;
  }

  // peak---->front() and back()
  int Front()
  {
    int chk;
    chk = front->value;
    return chk;
  }

  int Back()
  {
    int chk;
    chk = rear->value;
    return chk;
  }

  // empty--->empty()
  bool empty()
  {
    if (front == NULL && rear == NULL)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
};
};