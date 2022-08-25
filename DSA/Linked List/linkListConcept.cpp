#include <bits/stdc++.h>
using namespace std;

// create a Node
class Node
{
public:
  int value;
  Node *next;

  Node(int val) // constructor
  {
    value = val;
    next = NULL;
  }
};

// display the Node
void printNode(Node *&head)
{
  Node *temp = head; //(karon amra orginal Node ar orginal head ta nosto korte cai na tai temp head banai nichi)
  while (temp != NULL)
  {
    cout << temp->value << endl;
    temp = temp->next;
  }
}

// New value Add List
void insertList(Node *&head, int pos, int val)
{

  // O index ae value add korte caile
  if (pos == 0)
  {
    Node *prev_head = head;
    head = new Node(val);
    head->next = prev_head;
    return;
  }

  // 0 position chara other position ae add korte caile
  Node *temp = head;
  for (int i = 0; i < pos - 1; i++)
  {
    temp = temp->next;
  }
  Node *save_next = temp->next;
  Node *insert = new Node(50);
  temp->next = insert;
  insert->next = save_next;
}
// Delete a value list
void deleteList(Node *&head, int pos)
{
  if (pos == 0)
  {
    Node *dlt = head;
    head = head->next;
    delete dlt;
    return;
  }
  Node *temp = head;
  for (int i = 0; i < pos - 1; i++)
  {
    temp = temp->next;
  }
  // save 3rd position value
  Node *save_list = temp->next->next;
  // delete this 2nd position value
  delete temp->next;
  // connect the 1st postion value to 3rd postion value
  temp->next = save_list;
}
int main()
{
  // create a new Node(one kind of Orginal Node ar copy baniachi )
  Node *head = new Node(5);
  Node *second = new Node(10);
  Node *third = new Node(20);
  Node *fourth = new Node(40);
  // head connect to the next Node
  head->next = second;
  second->next = third;
  third->next = fourth;
  // printNode(head);
  // insertList(head, 0, 100);
  deleteList(head, 0);
  printNode(head);

  return 0;
}