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

// Node Insertion
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
  // insertAtTrail(head, 1);
  // insertAtTrail(head, 5);
  // insertAtTrail(head, 8);
  // insertAtTrail(head, 9);
  // insertAtTrail(head, 12);
  int n;
  char choice = 'Y';
  
  while (toupper(choice) == 'Y')
  {
    cout << "Enter the value:";
    cin >> n;
    insertAtTrail(head, n);
    cout << "Do you Want to Continue(Y/N):";
    cin >> choice;
  }

  linkDisplay(head);

  return 0;
}