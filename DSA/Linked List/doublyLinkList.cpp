#include <bits/stdc++.h>
using namespace std;

class doublyNode
{
public:
  int value;
  doublyNode *prev;
  doublyNode *next;

  doublyNode(int val)
  {
    value = val;
    prev = NULL;
    next = NULL;
  }
};

void insertAtTail(doublyNode *&head, int val)
{
  doublyNode *newNode = new doublyNode(val);
  if (head == NULL)
  {
    head = newNode;
    return;
  }
  doublyNode *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
  newNode->prev = temp;
}
void insertAtHead(doublyNode *&head, int val)
{
  // s1:New Node creation
  doublyNode *newNode = new doublyNode(val);
  // s2:update to head->prev=newNode
  head->prev = newNode;
  // s3:Update of newNode->Next
  newNode->next = head;
  // s3:update of head
  head = newNode;
}

void display(doublyNode *n)
{
  while (n != NULL)
  {
    cout << n->value;
    if (n->next != NULL)
    {
      cout << "-->";
    }
    n = n->next;
  }
  cout << endl
       << endl;
}
void displayReverse(doublyNode *head)
{
  doublyNode *temp = head;
  while (temp->next != NULL) // 1 2 3 4 5
  {
    temp = temp->next;
  }
  while (temp != NULL)
  {
    cout << temp->value; // 5-->4-->3-->2-->1
    if (temp->prev != NULL)
    {
      cout << "-->";
    }
    temp = temp->prev;
  }
  cout << endl
       << endl;
}
int countLength(doublyNode *&head)
{
  int count = 0;
  doublyNode *temp = head;
  while (temp != NULL)
  {
    temp = temp->next;
    count++;
  }
  return count;
}

int main()
{
  doublyNode *head = NULL;
  int value, position;
  cout << "choice-1:Insert a Head" << endl
       << "choice-2:Insert a Tail" << endl
       << "choice-0:Exit" << endl;
  cout << endl;
  cout << endl;
  cout << "next choice:";

  int choice;
  cin >> choice;
  while (choice != 0)
  {
    switch (choice)
    {
    case 1:
      cout << "Enter the Value Head:";
      cin >> value;
      insertAtHead(head, value);
      break;

    case 2:
      cout << "Enter the value Tail:";
      cin >> value;
      insertAtTail(head, value);
      break;

    default:
      break;
    }
    cout << "Next choice:";
    cin >> choice;
  }

  cout << endl;
  cout << " Doubly link List:";
  display(head);
  cout << " Doubly Reverse link List:";
  displayReverse(head);
  cout << " Doubly link List Length:" << countLength(head);

  return 0;
}