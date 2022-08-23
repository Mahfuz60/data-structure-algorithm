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

// Node Insertion Trail
void insertAtTrail(Node *&head, int val)
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
void linkDisplay(Node *head)
{
  while (head != NULL)
  {
    cout << head->value;
    if (head->Next != NULL)
    {
      cout << "->";
    }
    head = head->Next;
  }
}

int main()
{
  Node *head = NULL;
  int n;
  // Choice 1:Insersion at Head
  // Choice 2:Insersion at Trail
  cout << "Choice 1:Insersion at Head" << endl
       << "Choice 2:Insersion at Trail" << endl
       << "Choice 3:Exit" << endl
       << endl;
  int choice = 2;

  while (choice == 1 || choice == 2)
  {
    cout << "Enter the value:";
    cin >> n;
    if (choice == 1)                            
      insertAtHead(head, n);
    else if (choice == 2)
      insertAtTrail(head, n);

    cout << "Next Choice:";
    cin >> choice;
  }

  linkDisplay(head);

  return 0;
}