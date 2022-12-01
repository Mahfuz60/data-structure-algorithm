#include<bits/stdc++.h>
using namespace std;

class treeNode{
    public:
    int data;
    treeNode* leftChild;
    treeNode*rightChild;

    treeNode(int value){

        data=value;
        leftChild=NULL;
        rightChild=NULL;
    }
};


void printTree(treeNode* root,int level);
void spacePrint(int level);

/*
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


void printTree(treeNode* root,int level){
    if(root==NULL){  // when the tree is empty
        return;
    }

    if(root->leftChild==NULL  && root->rightChild==NULL){   //CASE-1
             cout <<root->data<<endl;

    }
    else{   //CASE-2
            cout<<endl;
            spacePrint(level);
             cout<<"Root : "<<root->data<<endl;
             }

   if(root->leftChild!=NULL){
    spacePrint(level);
   cout<<"Left: ";
   printTree(root->leftChild,level+1);
   }

   if(root->rightChild!=NULL){
    spacePrint(level);
   cout<<"Right: ";
   printTree(root->rightChild,level+1);
   }
}

void spacePrint(int level){

    for(int i=0;i<level;i++){
        cout<<"    ";
    }
}


int main(){
    int n;
    cout<<"Enter your Input:";
    cin>>n;
    treeNode*  allNodes[n];
    for(int i=0;i<n;i++){
        allNodes[i]=new  treeNode(-1);
    }

    for(int i=0;i<n;i++){
      int value,left,right;
    cin>>value>>left>>right;
    allNodes[i]->data=value;

    if(left!=-1){
        allNodes[i]->leftChild=allNodes[left];
    }
    if(right!=-1){
        allNodes[i]->rightChild=allNodes[right];
    }



    }

printTree(allNodes[0],0);



return 0;
}
