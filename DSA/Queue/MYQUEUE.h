#include <bits/stdc++.h>
using namespace std;

// create Node
<<<<<<< HEAD
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
=======
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
>>>>>>> 91e00cf1aae27b05eba2f5b4274661c9d57195a3
  }
};

// create Queue
<<<<<<< HEAD
template <typename Q> class Queue
{

  Node <Q> *front;
  Node <Q> *rear;
=======
class Queue
{
  Node *front;
  Node *rear;
>>>>>>> 91e00cf1aae27b05eba2f5b4274661c9d57195a3

public:
  // constructor
  Queue()
  {
    front = NULL;
    rear = NULL;
  }

  // enqueue --->push(val)
<<<<<<< HEAD
  void push(Q val)
  {

    Node <Q> *newNode = new Node <Q>(val);
=======
  void push(int val)
  {

    Node *newNode = new Node(val);
>>>>>>> 91e00cf1aae27b05eba2f5b4274661c9d57195a3
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
<<<<<<< HEAD
  Q pop()
  {
    Q chk ;
=======
  int pop()
  {
    int chk = -1;
>>>>>>> 91e00cf1aae27b05eba2f5b4274661c9d57195a3
    if (rear == NULL)
    {
      cout << "Queue is underflow and There is no element in queue" << endl;
      return chk;
    }

<<<<<<< HEAD
    Node<Q> *delNode;
=======
    Node *delNode;
>>>>>>> 91e00cf1aae27b05eba2f5b4274661c9d57195a3
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
<<<<<<< HEAD
  Q Front()
  {
    Q chk;
=======
  int Front()
  {
    int chk;
>>>>>>> 91e00cf1aae27b05eba2f5b4274661c9d57195a3
    chk = front->value;
    return chk;
  }

<<<<<<< HEAD
  Q Back()
  {
    Q chk;
=======
  int Back()
  {
    int chk;
>>>>>>> 91e00cf1aae27b05eba2f5b4274661c9d57195a3
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
<<<<<<< HEAD
};
=======
};

>>>>>>> 91e00cf1aae27b05eba2f5b4274661c9d57195a3
