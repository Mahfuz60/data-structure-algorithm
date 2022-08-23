#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int value;
  Node *Next;
  // constructor creation
  Node(int val)
  {
    value = val;
    Next = NULL;
  }
};
void insertAtTail(Node *&head, int val);
void insertAtHead(Node *&head, int val);
void linkDisplay(Node *n);
int lengthCount(Node *&head);

// Node Insertion Tail
void insertAtTail(Node *&head, int val)
{
  Node *newNode = new Node(val);
  if (head == NULL)
  {
    head = newNode;
    return;
  }

  Node *temp = head;
  while (temp->Next != NULL)
  {
    temp = temp->Next;
  }
  temp->Next = newNode;
}
// Node Insersion at Head
void insertAtHead(Node *&head, int val)
{
  // s1:New Node creation
  Node *newNode = new Node(val);
  // s2:Update of newNode->Next
  newNode->Next = head;
  // s3:update of head
  head = newNode;
}
// display function
void linkDisplay(Node *n)
{
  while (n != NULL)
  {
    cout << n->value;
    if (n->Next != NULL)
    {
      cout << "->";
    }
    n = n->Next;
  }
  cout << endl
       << endl;
}

// Liner LinkList Calculate Length
int lengthCount(Node *&head)
{
  int count = 0;
  Node *temp = head;
  while (temp != NULL)
  {
    temp = temp->Next;
    count++;
  }
  return count;
}
int main()
{
  Node *head = NULL;
  int value;
  // Choice 1:Insersion at Head
  // Choice 2:Insersion at Trail
  cout << "Choice 1:Insersion at Head" << endl
       << "Choice 2:Insersion at Trail" << endl
       << "Choice 0:Exit" << endl
       << endl
       << endl;
  cout << "Next Choice:";
  int choice;
  cin >> choice;
  while (choice != 0)
  {
    cout << "Enter the value:";
    cin >> value;
    switch (choice)
    {
    case 1:
      insertAtHead(head, value);
      break;

    case 2:
      insertAtTail(head, value);
      break;

    default:
      break;
    }

    cout << "Next Choice:";
    cin >> choice;
  }

  cout << "Linked List:" << endl;
  linkDisplay(head);

  cout << "Count of Link List Length:" << lengthCount(head) << endl;

  return 0;
}