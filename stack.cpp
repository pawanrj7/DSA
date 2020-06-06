#include<iostream>
using namespace std;

struct stack
{
    int size;
    int top;
    int *s;
};

void create(struct stack *st)
{
    cout<<"Enter the size of stack: ";
    cin>>st->size;
    st->top= -1;
    st->s= new int[st->size];
}

void push(struct stack *st, int x)
{
    if(st->top>st->size-1)
    {
        cout<<"stack is Full \n";
    }
    else
    {
        st->top++;
        st->s[st->top]=x;
    }
}

void pop(struct stack *st)
{
    if(st->top<0)
    {
        cout<<"stack is Empty \n";
    }
    else
    {
        cout<<st->s[st->top]<<" is poped."<<endl;
        st->top--;
    }
    
}
void display(struct stack *st)
{
    if(st->top<0)
    {
        cout<<"Stack is Empty...";
    }
    else
    {
        for(int i=st->top; i>=0; i--)
        {
            cout<<st->s[i]<<endl;
        }
    }
    
}

int main()
{
    struct stack st;
    create(&st);
    push(&st,1);
    push(&st,2);
    push(&st,3);
    display(&st);
    pop(&st);
    pop(&st);
    display(&st);
    push(&st,4);
    push(&st,5);
    display(&st);
    
    return 0;
}