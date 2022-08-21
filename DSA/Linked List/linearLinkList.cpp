#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int value;
  Node *Next;
};
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

  Node *head = new Node();
  Node *second = new Node();
  Node *third = new Node();
  Node *fourth = new Node();
  Node *fifth = new Node();

  head->value = 1;
  second->value = 4;
  third->value = 5;
  fourth->value = 8;
  fifth->value = 9;

  head->Next = second;
  second->Next = third;
  third->Next = fourth;
  fourth->Next = fifth;
  fifth->Next = NULL;

  linkDisplay(head);

  return 0;
}