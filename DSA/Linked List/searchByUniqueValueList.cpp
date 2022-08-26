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
int main()
{
  Node *head = NULL;
  int value;
  // Choice 1:Insersion at Head
  // Choice 2:Insersion at Trail
  cout << "Choice 1:Insersion at Head" << endl
       << "Choice 2:Insersion at Trail" << endl
       << "Choice 3:Insersion at Specific Position" << endl
       << "Choice 4:Search By Unique Value" << endl
       << "Choice 5:Search By Duplicate Value" << endl
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

      // position = searchByDuplicateValue(head, value);
      // if (position != -1)
      // {
      //   cout << "The Number is at Position: " << position << endl;
      // }
      // else
      // {
      //   cout << "The Number is not yet in this List" << endl;
      // }

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