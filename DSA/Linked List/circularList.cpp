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
void insertAtSpecificPosition(Node *&head, int pos, int val);
void deletionAtHead(Node *&head);
void deletionAtTail(Node *&head);
void deletionSpecificPosition(Node *&head, int Position);

// Node Insertion at Tail
void insertAtTail(Node *&head, int val)
{
  Node *newNode = new Node(val);
  if (head == NULL)
  {
    head = newNode;
    newNode->Next = head;
    return;
  }

  Node *temp = head;
  while (temp->Next != head)
  {
    temp = temp->Next;
  }
  newNode->Next = head; // newNode->Next=temp->Next
  temp->Next = newNode;
}
// Node Insersion at Head
void insertAtHead(Node *&head, int val)
{
  // s1:New Node creation
  Node *newNode = new Node(val);
  // s2:Update of newNode->Next
  newNode->Next = head;
  // s3:update the tail with new head
  Node *temp = head;
  if (head == NULL)
  {
    head = newNode;
    newNode->Next = head;
    return;
  }
  while (temp->Next != head)
  {
    temp = temp->Next;
  }
  temp->Next = newNode;

  // s4:update of head
  head = newNode;
}
// display function
void display(Node *head)
{
  if (head == NULL)
  {
    cout << "This Link list is Empty" << endl;
    return;
  }
  Node *temp = head;
  do
  {
    cout << temp->value;
    temp = temp->Next;
    if (temp != head)
    {
      cout << "-->";
    }

  } while (temp != head);
  cout << endl;
  cout << endl;
}

// Liner LinkList Calculate Length
int lengthCount(Node *&head)
{
  int count = 0;
  Node *temp = head;
  do
  {
    temp = temp->Next;
    count++;
  } while (temp != head);
  return count;
}
// Specific Position add this new value
void insertAtSpecificPosition(Node *&head, int pos, int val)
{
  int i = 0;
  Node *temp = head;
  while (i < pos - 2)
  {
    temp = temp->Next;
    i++;
  }
  Node *newNode = new Node(val);
  newNode->Next = temp->Next;
  temp->Next = newNode;
}

void deletionAtTail(Node *&head)
{
  Node *temp = head;
  if (temp != NULL && temp->Next != head)
  {
    while (temp->Next->Next != head)
    {
      temp = temp->Next;
    }
    Node *delNode = temp->Next;
    temp->Next = delNode->Next;
    delete delNode;
  }
  else
  {
    // Head is NULL
    if (temp == NULL)
      cout << "There is no value in this Linked list" << endl;
    // Head is Tail
    else
      deletionAtHead(head);
  }
}
void deletionAtHead(Node *&head)
{
  Node *temp = head;
  if (temp != NULL)
  {
    Node *delNode = temp;
    while (temp->Next != head)
    {
      temp = temp->Next;
    }
    temp->Next = delNode->Next;
    head = delNode->Next;
    delete delNode;
  }
  else
  {
    cout << "There is no value in this Linked list" << endl;
  }
}
void deletionSpecificPosition(Node *&head, int Position)
{
  Node *temp = head;
  if (Position <= lengthCount(head))
  {
    if (Position == 1)
    {
      deletionAtHead(head);
    }
    else if (Position == lengthCount(head))
    {
      deletionAtTail(head);
    }
    else
    {
      int i = 1;
      while (i < Position - 1)
      {
        temp = temp->Next;
        i++;
      }
      Node *delNode = temp->Next;
      temp->Next = delNode->Next;

      delete delNode;
    }
  }
  else
  {

    cout << "Position is out bound" << endl;
  }
}

int main()
{
  Node *head = NULL;
  int value;

  cout << "Choice 1:Insersion at Head" << endl
       << "Choice 2:Insersion at Trail" << endl
       << "Choice 3:Insersion at Specific Position" << endl
       << "Choice 4:Deletion at Head" << endl
       << "Choice 5:Deletion at Tail" << endl
       << "Choice 6:Deletion at Specific Position" << endl
       << "Choice 0:Exit" << endl
       << endl
       << endl;
  cout << "Next Choice:";
  int choice, position;
  cin >> choice;
  while (choice != 0)
  {
    switch (choice)
    {
    case 1:
      cout << "Enter the value:";
      cin >> value;
      insertAtHead(head, value);
      break;

    case 2:
      cout << "Enter the value:";
      cin >> value;
      insertAtTail(head, value);
      break;
    case 3:
      cout << "Enter the Desired Position:";
      cin >> position;
      cout << "Enter the value:";
      cin >> value;
      insertAtSpecificPosition(head, position, value);
      break;
    case 4:
      deletionAtHead(head);

      break;
    case 5:
      deletionAtTail(head);

      break;
    case 6:
      if (head == NULL)
      {
        cout << "There is No value in this Link List" << endl;
        break;
      }
      cout << "Enter the Desired Position:";
      cin >> position;
      deletionSpecificPosition(head, position);
      cout << endl;
      display(head);

      break;

    default:
      break;
    }

    cout << "Next Choice:";
    cin >> choice;
  }
  cout << endl;

  cout << "Linked List:" << endl;
  display(head);

  cout << "Count of Link List Length:" << lengthCount(head) << endl;

  return 0;
}