#include <bits/stdc++.h>
using namespace std;

class treeNode
{
public:
  int data;
  treeNode *leftChild;
  treeNode *rightChild;

  treeNode(int value)
  {

    data = value;
    leftChild = NULL;
    rightChild = NULL;
  }
};

void printTree(treeNode *root, int level);
void spacePrint(int level);

/*InOrder method(left-root-right) */
void inOrder(treeNode *root, string &chk)
{
  if (root == NULL)
    return;
  inOrder(root->leftChild, chk);
  chk += to_string(root->data);
  inOrder(root->rightChild, chk);
}
/*preOrder method(root-left-right) */
void preOrder(treeNode *root, string &chk)
{
  if (root == NULL)
    return;

  chk += to_string(root->data);
  preOrder(root->leftChild, chk);
  preOrder(root->rightChild, chk);
}
/*postOrder method(left-right-root) */
void postOrder(treeNode *root, string &chk)
{
  if (root == NULL)
    return;

  postOrder(root->leftChild, chk);
  postOrder(root->rightChild, chk);
  chk += to_string(root->data);
}

void printTree(treeNode *root, int level)
{
  if (root == NULL)
  { // when the tree is empty
    return;
  }

  if (root->leftChild == NULL && root->rightChild == NULL)
  { // CASE-1
    cout << root->data << endl;
  }
  else
  { // CASE-2
    cout << endl;
    spacePrint(level);
    cout << "Root : " << root->data << endl;
  }

  if (root->leftChild != NULL)
  {
    spacePrint(level);
    cout << "Left: ";
    printTree(root->leftChild, level + 1);
  }

  if (root->rightChild != NULL)
  {
    spacePrint(level);
    cout << "Right: ";
    printTree(root->rightChild, level + 1);
  }
}

void spacePrint(int level)
{

  for (int i = 0; i < level; i++)
  {
    cout << "    ";
  }
}

/*
10
pre:
0 1 3 4 2 5 7 8 6
in:
3 1 4 0 7 5 8 2 6


0 1 2
1 3 4
2 5 6
3 -1 -1
4 -1 -1
5 7 8
6 -1 -1
7 -1 -1
8 -1 -1



*/
int searchInOrder(int inOrder[], int current, int start, int end)
{
  for (int i = start; i <= end; i++)
  {
    if (inOrder[i] == current)
    {
      return i;
    }
    return -1;
  }
}

treeNode *buildTreePreIn(int preOrder[], int inOrder[], int start, int end)
{
  int id = 0;
  int current = preOrder[id];
  int position = searchInOrder(inOrder, current, start, end);
}

int main()
{
  int n;
  cout << "Enter your Input:";
  cin >> n;
  int preOrder[n], inOrder[n];
  for (int i = 0; i < n; i++)
  {
    cin >> preOrder[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> inOrder[i];
  }

  treeNode *root = buildTreePreIn(preOrder, inOrder, 0, n - 1);

  return 0;
}