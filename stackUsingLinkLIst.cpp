#include<iostream>
using namespace std;

struct stack{
    int data;
    struct stack *next;
}*top=NULL;



void push( int x)
{
    stack *t = new stack;
    if(t==NULL)
    {
        cout<<"Stack is Full";
    }
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }   
}
int pop()
{
    int x= -1;
    struct stack *t;
    if(top==NULL)
    {
        cout<<"Stack is Empty";
    }
    else
    {    
        t=top;
        x=top->data;
        top=top->next;
        delete t;
    }
    return x;
    
}
void display()
{
    struct stack *t;
    t=top;
    cout<<"Elements in stack are:\n";
    while(t!=NULL){    
        cout<<t->data<<endl;
        t= t->next;
    }
}
int main()
{

    push(5);
    push(4);
    display();
    pop();
    display();
    push(3);
    push(1);
    display();
    return 0;
}