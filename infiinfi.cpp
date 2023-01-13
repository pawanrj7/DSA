#include <iostream>
#include<string.h>
using namespace std;
template <class T>
class Stack
{
private:
    T *st;
    int size;
    int top;

public:
    Stack()
    {
        size = 10;
        top = -1;
        st = new T[size];
    }
    Stack(int size)
    {
        this->size = size;
        top = -1;
        st = new T[this->size];
    }
    void push(T x);
    T pop();
    T peek(int index);
    int stacktop();
    int isEmpty();
    int isFull();
    void Display();
};
template <class T>
void Stack<T>::push(T x)
{
    if (isFull())
        cout << "Stack Overflow" << endl;
    else
    {
        top++;
        st[top] = x;
    }
}
template <class T>
T Stack<T>::pop()
{
    T x = -1;
    if (isEmpty())
        cout << "Stack underlfow" << endl;
    else
    {
        x = st[top];
        top--;
    }
    return x;
}
template <class T>
T Stack<T>::peek(int index)
{
    T x = -1;
    if (top - index + 1 < 0)
        cout << "Invalid Index" << endl;
    else
        x = st[top - index + 1];
    return x;
}
template <class T>
int Stack<T>::stacktop()
{
    if (isEmpty())
        return -1;
    return st[top];
}
template <class T>
int Stack<T>::isFull() { return top == size - 1; }
template <class T>
int Stack<T>::isEmpty() { return top == -1; }
template <class T>
void Stack<T>::Display()
{
    for (int i = top; i >= 0; i--)
        cout << st[i] << " ";
    cout << endl;
}

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
    Stack<char> st(10);
    char t=st.stacktop();
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
            if(pre(infix[i]>pre(st.stacktop())))
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
    char *postfix;
    gets(infix);
    postfix = infixToPostfix(infix);
    cout<<postfix;
    return 0;
}