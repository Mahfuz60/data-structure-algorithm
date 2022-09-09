#include <bits/stdc++.h>
using namespace std;

// Create a Node
class Node
{
public:
  int value;
  Node *next;
  Node *prev;

  Node(int val)
  {

    value = val;
    next = NULL;
    prev = NULL;
  }
};

// Create a Stack
class Stack
{
  Node *head;
  Node *top;
  int count = 0;

public:
  Stack()
  {
    head = NULL;
    top = NULL;
  }
  // PUSH Operation
  void push(int val)
  {
    Node *newNode = new Node(val);

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
  int pop()
  {
    Node *delNode;
    delNode = top;
    int check = -1;
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
  int Top()
  {
    int check;
    if (top == NULL)
    {
      cout << "Stack Underflow |There is No element in Top" << endl;
      check = -1;
    }
    else
    {
      check = top->value;
      return check;
    }
  }
};