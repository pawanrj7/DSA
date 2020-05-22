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
void add(struct node *p,int val)
{
    struct node *t, *q;
    q=p;
    t= new node;
    t->data=val;
    t->next= NULL;
    while(q->next!=NULL)
    {
        q=q->next;
    }
    q->next=t;
    q=t;
}
int sum(struct node *p)
{
    int ss=0;
    while(p!=NULL)
    {
        ss+=p->data;
        p=p->next;
    }
    return ss;
}

int main()
{
    int arr[]={1,3,4,5,6,7};
    create(arr, 6);
    display(head);
    add(head, 10);
    cout<<"\n After adding the value list is\n";
    display(head);
    cout<<"\n sum of list is:"<<sum(head);
    return 0;
}