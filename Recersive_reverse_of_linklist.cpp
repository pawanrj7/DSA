#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*head=NULL;

void create(int arr[], int n)
{
    struct node *t, *last;
    
    head= new node;
    head->data=arr[0];
    head->next= NULL;
    last=head;

    
    for(int i=1;i<n;i++)
    {
        t= new node;
        t->data=arr[i];
        t->next= NULL;
        last->next=t;
        last=t;
    }
}
void display(struct node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

void reverse(struct node *q, struct node *p)
{
    if(p!=NULL)
    {
        reverse(p,p->next);
        p->next=q;
    }
    else
    {
        head=q;
    }
}


int main()
{
    int arr[]={1,3,4,5,6,7};
    create(arr, 6);
    display(head);
    cout<<"\nList after reversing\n";
    reverse(NULL ,head);
    display(head);
    
    return 0;
}