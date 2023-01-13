#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
}*head=NULL;

void create(int arr[], int n)
{
    struct Node *t, *last;
    head = new Node;
    head->data=arr[0];
    head->prev= NULL;
    head->next= NULL;
    last= head;

    for(int i=1;i<n;i++)
    {
        t = new Node;
        t->data=arr[i];
        t->next=NULL;
        t->prev=last;
        last->next=t;
        last=t;

    }
}

void display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}


int main()
{
    int arr[]= {1,2,3,4,5};
    create(arr, 5);
    display(head);
    return 0;
}