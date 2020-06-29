#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
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
        void push(int x)
        {
            Node *t= new Node;
            t->data=x;
            t->next=top;
            top=t;
        }
        int pop()
        {
            int x=-1;
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
        
};

int main()
{
    Stack st;
    st.push(5);
    st.push(7);
    st.push(5);
    st.display();
    st.pop();
    st.display();
    return 0;
}