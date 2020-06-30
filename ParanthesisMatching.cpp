#include <iostream>
#include <string.h>
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
        top = NULL;
    }
    void push(char x)
    {
        Node *t = new Node;
        t->data = x;
        t->next = top;
        top = t;
    }
    void pop()
    {
        Node *t = new Node;
        t = top;
        top = top->next;
        delete t;
    }
    void display()
    {
        Node *t = top;
        cout << "Elements in stacks are" << endl;
        while (t != NULL)
        {
            cout << t->data << endl;
            t = t->next;
        }
    }
    int isEmpty()
    {
        if (top == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int isBalance(Stack st, char *exp)
{
    for (int i = 0;exp[i]!='\0'; i++)
    {
        if (exp[i] == '(')
        {
            st.push(exp[i]);
        }
        else if (exp[i] == ')')
        {
            if(st.isEmpty())
            {
                return false;
            }
            else
            {
                st.pop();
            }
            
        }
    }
    if(st.isEmpty())
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    Stack st;
    char *exp;
    cout << "Enter expersion";
    gets(exp);
    if(isBalance(st , exp))
    {
        cout<<"Exp is complete";
    }
    else
    {
        cout<<"Exp is not complete";
    }

    return 0;
}