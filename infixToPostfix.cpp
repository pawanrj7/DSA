#include<iostream>
#include<string.h>

using namespace std;

class Node
{
    public:
        char data;
        Node *next;
};

class Stack
{
    private:
        Node *top;
    public:
        Stack()
        {
            top= NULL;
        }
        void push(char x)
        {
            Node *t= new Node;
            t->data=x;
            t->next=top;
            top=t;
        }
        char pop()
        {
            char x=-1;
            Node *t= new Node;
            t= top;
            x= t->data;
            top=top->next;
            delete t;
            return x;
        }
        void display()
        {
            Node *t = top;
            cout<<"Elements in stacks are"<<endl;
            while(t!=NULL)
            {
                cout<<t->data<<endl;
                t= t->next;

            }
            
        }

        char Top()
        {
            return top->data;
        }
        int isEmpty()
        {
            if(top==NULL)
            {
                return 1;
            }
            return 0;
        }
        
};

int pre(char ch)
{
    if(ch=='+' || ch=='-')
    {
        return 1;
    }
    else if(ch=='/' || ch== '*')
    {
        return 2;
    }
    return 0;
}

int isOperand(char ch)
{
    if(ch=='+' || ch=='-' || ch== '/' || ch=='*')
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
}

char* infixToPostfix(char *infix)
{
    Stack st;
    char t=st.Top();
    cout<<t;
    char* postfix = new char[sizeof(char)*(strlen(infix)+1)];
    int i=0,j=0;
    while(infix[i]!='\0')
    {
        if(isOperand(infix[i]))
        {
            postfix[j++]=infix[i++];
        }
        else
        {
            if(pre(infix[i]>pre(st.Top())))
            {
                st.push(infix[i]);
            }
            else
            {
                postfix[j++]= st.pop();
            }
            
        }
        
    }
    while(!st.isEmpty())
    {
        postfix[j++]= st.pop();
    }
    

    return postfix;
    
}

int main()
{
    char *infix;
    gets(infix);
    Stack aw;
    aw.push(infix[1]);
    cout<<aw.Top()<<endl;
    cout<<aw.isEmpty();
    aw.display();
    cout<<aw.pop()<<endl<<aw.isEmpty()<<endl;
    aw.display();
    char *postfix;
    postfix= infixToPostfix(infix);
    cout<<postfix;
    return 0;
}