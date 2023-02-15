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
  str += (to_string(root->value) + " ");
  inOderTraversal(root->rightChild, str);
}

TreeNode *searchBST(TreeNode *root, int value)
{
  if (root == NULL)
    return NULL;
  if (root->value == value)
  {
    // cout << root->value;
    return root;
  }
  else if (value < root->value)
  {
    // cout << root->value << "->";
    searchBST(root->leftChild, value);
  }
  else
  {
    // cout << root->value << "->";
    searchBST(root->rightChild, value);
  }
}
TreeNode *inOderSuccesser(TreeNode *root)
{
  TreeNode *current = root;
  while (current->leftChild != NULL)
  {
    current = current->leftChild;
  }
  return current;
}

TreeNode *deleteBST(TreeNode *root, int value)
{
  if (value < root->value)
  {
    root->leftChild = deleteBST(root->leftChild, value);
  }
  else if (value > root->value)
  {
    root->rightChild = deleteBST(root->rightChild, value);
  }
  else
  {
    // implemantation of 3 cases
    if (root->leftChild == NULL)
    { // case-1 and case-2
      TreeNode *temp = root->rightChild;
      free(root);
      return temp;
    }
    else if (root->rightChild == NULL)
    { // case -2
      TreeNode *temp = root->leftChild;
      free(root);
      return temp;
    }
    else
    { // case-3
      TreeNode *temp = inOderSuccesser(root->rightChild);
      root->value = temp->value;
      root->rightChild = deleteBST(root->rightChild, temp->value);
    }
    return root;
  }
}

// Zigzag Traversal in BST

void zigzagTraversal(TreeNode *root)
{
  stack<TreeNode *> currentLevel;
  stack<TreeNode *> nextLevel;
  bool leftToRight = true;
  currentLevel.push(root);

  while (!currentLevel.empty())
  {
    TreeNode *x = currentLevel.top();
    currentLevel.pop();
    cout << x->value << " ";

    if (leftToRight)
    {
      if (x->leftChild)
      {
        nextLevel.push(x->leftChild);
      }
      if (x->rightChild)
      {
        nextLevel.push(x->rightChild);
      }
    }
    else
    {
      if (x->rightChild)
      {
        nextLevel.push(x->rightChild);
      }
      if (x->leftChild)
      {
        nextLevel.push(x->leftChild);
      }
    }

    if (currentLevel.empty())
    {
      leftToRight != leftToRight;
      swap(currentLevel, nextLevel);
    }
  }
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
  cout << endl;

  zigzagTraversal(root);

  // int key;
  // cin >> key;
  // if (searchBST(root, key) == NULL)
  // {
  //   cout <<endl<< "Value does not exits in the BST";
  // }
  // else
  // {
  //   cout <<endl<< "Value exits in The BST";
  // }

  // root = deleteBST(root, key);
  // string afterDelation = "";
  // inOderTraversal(root, afterDelation);
  // cout << afterDelation;
  // cout << endl;

  return 0;
}

/*
input:
10
11 5 9 43 34 1 2 7 8 21
*/