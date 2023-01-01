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

/*
Enter your Input:9
0 1 2
1 3 4
2 5 6
3 -1 -1
4 -1 -1
5 7 8
6 -1 -1
7 -1 -1
8 -1 -1
Root:0
Left:
        Root:1
        left:3
        right:4
 Right:
           Root:2
           left:
                  Root:5
                  left:7
                  right:8
            Right:6
*/

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

<<<<<<< HEAD
void spacePrint(int level)
{
=======
void levelOrder(treeNode*root,string &chk){
    if(root==NULL){
        return;
    }
    int level=0;
    queue<treeNode*>q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
    treeNode*chkNode=q.front();
    q.pop();

    if(chkNode!=NULL){
            cout<<chkNode->data<<" ";
            chk+=to_string(chkNode->data);


            if(chkNode->leftChild!=NULL){
                q.push(chkNode->leftChild);
            }
            if(chkNode->rightChild!=NULL){
            q.push(chkNode->rightChild);
            }

}
else{
    if(!q.empty()){
        q.push(NULL);
    }
}

    }
    cout<<endl;
}

>>>>>>> 865136f01a2ed2654ec38abd16e91a4f5c7a045b

    for (int i = 0; i < level; i++)
    {
        cout << "    ";
    }
}

void levelOrder(treeNode *root, string &chk)
{
    if (root == NULL)
    {
        return;
    }
    int level = 0;
    queue<treeNode *> q;

    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        treeNode *chkNode = q.front();
        q.pop();

        if (chkNode != NULL)
        {
            cout << chkNode->data << " ";
            chk += to_string(chkNode->data);

            if (chkNode->leftChild != NULL)
            {
                q.push(chkNode->leftChild);
            }
            if (chkNode->rightChild != NULL)
            {
                q.push(chkNode->rightChild);
            }
        }
        else
        {
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
    }
    cout << endl;
}

<<<<<<< HEAD
int main()
{
    int n;
    cout << "Enter your Input:";
    cin >> n;
    treeNode *allNodes[n];
    for (int i = 0; i < n; i++)
    {
        allNodes[i] = new treeNode(-1);
    }

    for (int i = 0; i < n; i++)
    {
        int value, left, right;
        cin >> value >> left >> right;
        allNodes[i]->data = value;

        if (left != -1)
        {
            allNodes[i]->leftChild = allNodes[left];
        }
        if (right != -1)
        {
            allNodes[i]->rightChild = allNodes[right];
        }
    }

    /*printTree(allNodes[0],0);*/

    /*inOrder Traversal*/
    string inOrderTraversal = " ";
    /*preOrder Traversal*/
    string preOrderTraversal = " ";
    /*postOrder Traversal*/
    string postOrderTraversal = " ";
    /*levelOrderTraversal*/
    string levelOrderTraversal = " ";

    inOrder(allNodes[0], inOrderTraversal);
    preOrder(allNodes[0], preOrderTraversal);
    postOrder(allNodes[0], postOrderTraversal);
    levelOrder(allNodes[0], levelOrderTraversal);

    /*
    cout<<"inOrderTraversal:"<<inOrderTraversal<<endl;
    cout<<"preOrderTraversal:"<<preOrderTraversal<<endl;
    cout<<"postOrderTraversal:"<<postOrderTraversal<<endl;
    */
    cout << "levelOrderTraversal:" << levelOrderTraversal << endl;

    /*
    output:
    inOrderTraversal: 314075826
    preOrderTraversal: 013425786
    postOrderTraversal: 341785620
    */

    return 0;
}
=======
/*printTree(allNodes[0],0);*/


/*inOrder Traversal*/
string  inOrderTraversal=" ";
/*preOrder Traversal*/
string preOrderTraversal=" ";
/*postOrder Traversal*/
string postOrderTraversal=" ";
/*levelOrderTraversal*/
string levelOrderTraversal=" ";


inOrder(allNodes[0],inOrderTraversal);
preOrder(allNodes[0],preOrderTraversal);
postOrder(allNodes[0],postOrderTraversal);
levelOrder(allNodes[0],levelOrderTraversal);

/*
cout<<"inOrderTraversal:"<<inOrderTraversal<<endl;
cout<<"preOrderTraversal:"<<preOrderTraversal<<endl;
cout<<"postOrderTraversal:"<<postOrderTraversal<<endl;

*/
cout<<"levelOrderTraversal:"<<levelOrderTraversal<<endl;



/*
output:
inOrderTraversal: 314075826
preOrderTraversal: 013425786
postOrderTraversal: 341785620

*/

return 0;
}
>>>>>>> 865136f01a2ed2654ec38abd16e91a4f5c7a045b
