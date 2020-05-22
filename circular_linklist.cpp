#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node *next;
} *head;

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
        t->next= head;
        last->next=t;
        last=t;
    }
}
void display(struct node *p)
{
    struct node *t;
    t= p->next;
    while(p!=t)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<t->data;
}
int main()
{
    int arr[]={1,3,4,5,6,7};
    create(arr, 6);
    display(head);
    return 0;
}