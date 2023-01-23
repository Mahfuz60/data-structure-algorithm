#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
  int value;
  TreeNode *leftChild;
  TreeNode *rightChild;

  TreeNode(int value)
  {
    this->value = value;
    this->leftChild = NULL;
    this->rightChild = NULL;
  }
};

TreeNode *insertAtBinarySearchTree(TreeNode *root, int value)
{
  TreeNode *newNode = new TreeNode(value);
  if (root == NULL)
  {
    root = newNode;
    return root;
  }
  // value<root->value
  if (value < root->value)
  {
    root->leftChild = insertAtBinarySearchTree(root->leftChild, value);
  }
  // value>root->value
  else if (value > root->value)
  {
    root->rightChild = insertAtBinarySearchTree(root->rightChild, value);
  }
  return root;
}

void inOderTraversal(TreeNode *root, string &str)
{
  if (root == NULL)
    return;
  inOderTraversal(root->leftChild, str);
  str += (to_string(root->value)+" ");
  inOderTraversal(root->rightChild, str);
}

TreeNode *inOrderSuccessor(TreeNode *root)
{
}

int main()
{
  int n;
  cin >> n;
  TreeNode *root = NULL;
  for (int i = 0; i < n; i++)
  {
    int value;
    cin >> value;
    root = insertAtBinarySearchTree(root, value);
  }

  string traversal = "";
  inOderTraversal(root, traversal);
  cout << traversal;

  return 0;
}

/*
input:
9
11 5 9 43 34 1 2 7 21
*/