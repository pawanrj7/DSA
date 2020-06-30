#include<iostream>
using namespace std;

struct node
{
    int coef;
    int exp;
    node *next;
}*head= NULL, *last;

void createPoly(struct node *p, int size)
{
    struct node *t;
    for(int i=0; i<size; i++)
    {
        cout<<"Enter the coeff and power of exp: ";
        t= new node;
        cin>>t->coef>>t->exp;
        t->next= NULL;
        if(head==NULL)
        {
            head=t;
            last=t;
        }
        else
        {
            last->next=t;
            last=t;
        }
           
    }
}

void display(struct node *p)
{
    while(p)
    {
        cout<<p->coef<<"x^"<<p->exp;
        p=p->next;
        if(p)
        {
            cout<<"+";
        }
    }
}

int main()
{
    int size;
    cout<<"Enter size of polynomial: ";
    cin>>size;
    createPoly(head, size);
    display(head);
    return 0;
}

