#include <bits/stdc++.h>
using namespace std;

// Create a Node
template <typename N>
class Node
{
public:
  N value;
  Node *next;
  Node *prev;

  // constructor
  Node(N val)
  {
    value = val;
    next = NULL;
    prev = NULL;
  }
};

// Create a Stack
template <typename S>
class Stack
{
  Node<S> *head;
  Node<S> *top;
  int count = 0;

public:
  Stack()
  {
    head = NULL;
    top = NULL;
  }
  // PUSH Operation
  void push(S val)
  {
    Node<S> *newNode = new Node<S>(val);

    if (head == NULL)
    {
      head = top = newNode;
      count++;
      return;
    }
    top->next = newNode;
    newNode->prev = top;
    top = newNode;
    count++;
  }
  // POP Operation
  S pop()
  {
    Node<S> *delNode;
    delNode = top;
    S check;
    if (head == NULL)
    { // there is No element in this stack
      cout << "Stack Underflow" << endl;
      return check;
    }
    if (head == top) // there is only 1 element
    {
      top = head = NULL;
    }
    else // there is more than 1 element
    {
      top = delNode->prev;
      top->next = NULL;
    }
    check = delNode->value;
    delete delNode;
    count--;
    return check;
  }
  // EMPTY Operation
  bool empty()
  {
    if (head == NULL)
      return true;
    else
      return false;
  }
  // SIZE Operation
  int size()
  {
    return count;
  }

  // TOP Operation
  S Top()
  {
    S check;
    if (top == NULL)
    {
      cout << "Stack Underflow |There is No element in Top" << endl;
    }
    else
    {
      check = top->value;
      return check;
    }
  }
};