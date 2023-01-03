#include<bits/stdc++.h>
using namespace std;

class MyLinkList{

public:
    int val;
    MyLinkList* next;
    MyLinkList *head;
    MyLinkedList() {
         this->head=NULL;

    }

    MyLinkList(int val){
    this->val=val;

    this->next=NULL;
    }
    int get(int index) {
        MyLinkList*temp=head;
        for(int i=0;i<index;i++){
            temp=temp->next;
            if(temp==NULL) break;

        }

        if(temp==NULL)  return -1;
        else  return temp->val;




    }





};


int main(){


return 0;
}
