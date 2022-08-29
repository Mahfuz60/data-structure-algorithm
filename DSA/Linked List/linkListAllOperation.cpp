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
struct Test
{
  int position[1000];
};

void insertAtTail(Node *&head, int val);
void insertAtHead(Node *&head, int val);
void linkDisplay(Node *n);
int lengthCount(Node *&head);
void insertAtSpecificPosition(Node *&head, int pos, int val);
int searchByUniqueValue(Node *&head, int key);
void searchByDuplicateValue(Node *&head, int key);
Test searchByValueDuplicateReturn(Node *&head, int key);
void insertionAfterSpecificValue(Node *&head, int position, int value);
void deletionAtHead(Node *&head);
void deletionSpecificPosition(Node *&head, int Position);
void deletionByUniqueValue(Node *&head, int Position);

// Node Insertion at Tail
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
// search by unique Value linkList
int searchByUniqueValue(Node *&head, int key)
{
  Node *temp = head; // 1 2 3 4 5 6
  int count = 1;
  if (temp == NULL)
  {
    return -1;
  }
  while (temp->value != key)
  {
    if (temp->Next == NULL)
    {
      return -1;
    }
    temp = temp->Next; // 2 3 4
    count++;           // 2  3 4
  }
  return count;
}
// search by duplicate value
void searchByDuplicateValue(Node *&head, int key)
{
  Node *temp = head;
  int size;
  size = lengthCount(head);
  int position[size + 1], k = 1;

  int count = 1;
  int flag = 0;
  while (temp != NULL)
  {
    if (temp->value == key)
    {
      // cout << count << " ";
      position[k] = count;
      k++;
      flag = 1;
    }

    temp = temp->Next;
    count++;
  }
  if (flag == 0)
  {
    cout << "The Searching Value is not found in this list" << endl;
  }
  else
  {
    position[0] = k;
    cout << "This Value Found at This Position:";
    for (int i = 1; i < position[0]; i++)
    {
      cout << position[i];
      if (i < position[0] - 1)
      {
        cout << " ,";
      }
    }
    cout << endl;
  }
}
// search Value By Duplicate Return
Test searchByValueDuplicateReturn(Node *&head, int key)
{
  Node *temp = head;
  Test T;
  int k = 1;

  int count = 1;
  while (temp != NULL)
  {
    if (temp->value == key)
    {

      T.position[k] = count;
      k++;
    }

    temp = temp->Next;
    count++;
  }
  T.position[0] = k;
  return T;
}
void insertionAfterSpecificUniqueValue(Node *&head, int searchValue, int value)
{
  // step-1;search the position of searchValue
  int position;
  position = searchByUniqueValue(head, searchValue);
  // step-2:insert the value at the postion+1
  insertAtSpecificPosition(head, position + 1, value);
}
void deletionAtHead(Node *&head)
{
  Node *temp = head;
  if (temp != NULL)
  {
    head = temp->Next;
    delete temp;
  }
  else
  {
    cout << "There is no value in this Linked list" << endl;
  }
}
void deletionAtTail(Node *&head)
{
  Node *temp = head;
  if (temp != NULL && temp->Next != NULL)
  {
    while (temp->Next->Next != NULL)
    {
      temp = temp->Next;
    }
    Node *delNode = temp->Next;
    temp->Next = NULL;
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
    // Position is Out of range
    // if (Position > lengthCount(head))
    cout << "Position is out bound" << endl;
    // Link List is NULL

    // else
    //   cout << "There is Value in this Linked List" << endl;
  }
}
void deletionByUniqueValue(Node *&head, int value)
{
  // find the position of this value
  int position;
  position = searchByUniqueValue(head, value);
  // delete the node at this position value
  if (position == -1)
  {
    cout << "Value is not found in this link List" << endl;
  }
  else
  {
    deletionSpecificPosition(head, position);
  }
}
// reverse Link list Non Recursive
Node *reverseNonRecursiveLinkList(Node *&head)
{
  Node *prev = NULL;
  Node *current = head;
  if (head == NULL)
  {
    cout << "The Link List is Empty!" << endl;
    return head;
  }

  Node *next = head->Next;

  while (true)
  {
    current->Next = prev;
    prev = current;
    current = next;
    if (current == NULL)
      break;
    next = next->Next;
  }
  return prev;
}
int main()
{
  Node *head = NULL;
  int value;

  cout << "Choice 1:Insersion at Head" << endl
       << "Choice 2:Insersion at Trail" << endl
       << "Choice 3:Insersion at Specific Position" << endl
       << "Choice 4:Search By Unique Value" << endl
       << "Choice 5:Search By Duplicate Value" << endl
       << "Choice 6:Insertion after specific value(unique value)" << endl
       << "Choice 7:Deletion at Head" << endl
       << "Choice 8:Deletion at Tail" << endl
       << "Choice 9:Deletion at Specific Position" << endl
       << "Choice 10:Deletion at Unique Value" << endl
       << "Choice 11:Reverse Link List(Non Recursive)" << endl
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
      cout << "Enter the search Unique value:";
      cin >> value;
      position = searchByUniqueValue(head, value);
      if (position != -1)
      {
        cout << "The Number is at Position: " << position << endl;
      }
      else
      {
        cout << "The Number is not yet in this List" << endl;
      }

      break;
    case 5:
      cout << "Enter the search Duplicate value:";
      cin >> value;
      // searchByDuplicateValue(head, value);
      Test T;
      T = searchByValueDuplicateReturn(head, value);
      if (T.position[0] == 1)
      {
        cout << "The search value Not yet in this list" << endl;
      }
      else
      {
        int size = T.position[0];
        cout << "The Value Found at this Position:";
        for (int i = 1; i < size; i++)
        {
          cout << T.position[i];
          if (i < size - 1)
          {
            cout << ",";
          }
        }
        cout << endl;
      }
      break;
    case 6:
      cout << "Enter the value search:";
      int searchValue;
      cin >> searchValue;
      cout << "Enter the value Insert:";
      cin >> value;
      insertionAfterSpecificUniqueValue(head, searchValue, value);

      break;
    case 7:
      deletionAtHead(head);

      break;
    case 8:
      deletionAtTail(head);

      break;
    case 9:
      if (head == NULL)
      {
        cout << "There is No value in this Link List" << endl;
        break;
      }
      cout << "Enter the Desired Position:";
      cin >> position;
      deletionSpecificPosition(head, position);
      cout << endl;
      linkDisplay(head);

      break;
    case 10:
      cout << "deletion of this Unique value:";
      int deleteValue;
      cin >> deleteValue;
      deletionByUniqueValue(head, deleteValue);
      break;
    case 11:

      head = reverseNonRecursiveLinkList(head);

      cout << endl;

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