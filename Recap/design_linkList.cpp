#include <bits/stdc++.h>
using namespace std;

class MyLinkedList
{

public:
    int val;
    MyLinkedList *next;
    MyLinkedList *head;

    MyLinkedList(int val)
    {
        this->val = val;
        this->head = NULL;
        this->next = NULL;
    }
    int get(int index)
    {
        MyLinkedList *temp = head;
        for (int i = 0; i < index; i++)
        {
            temp = temp->next;
            if (temp == NULL)
                break;
        }

        if (temp == NULL)
            return -1;
        else
            return temp->val;
    }
    void addAtHead(int val)
    {
        MyLinkedList *newNode = new MyLinkedList(val);
        newNode->next = head;
        head = newNode;
    }

    void addAtTail(int val)
    {
        MyLinkedList *newNode = new MyLinkedList(val);
        if (head == NULL)
        {
            head = newNode;
            return;
        }

        MyLinkedList *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void addAtIndex(int index, int val)
    {
        if (index == 0)
        {
            addAtHead(val);
            return;
        }
        MyLinkedList *temp = head;
        for (int i = 0; i < index - 1; i++)
        {
            temp = temp->next;
            if (temp == NULL)
                break;
        }
        if (temp == NULL)
            return;
        MyLinkedList *newNode = new MyLinkedList(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteAtIndex(int index)
    {
        if (index == 0)
        {
            MyLinkedList *del = head;
            head = head->next;
            delete del;
            return;
        }

        MyLinkedList *temp = head;
        for (int i = 0; i < index - 1; i++)
        {
            temp = temp->next;
            if (temp == NULL)
                break;
        }
        if (temp == NULL)
            return;
        MyLinkedList *del = temp->next;
        if(del==NULL) return;
        temp->next = temp->next->next;
        delete del;
    }
};

int main()
{

    return 0;
}
