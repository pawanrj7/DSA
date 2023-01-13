#include<iostream>
using namespace std;

struct node
{
    int col;
    int data;
    node *next;
};

void create(int row)
{
    node *arr[row],*last;
    int val;
    for(int i=0;i<row;i++)
    {
        cout<<"Enter no of values in "<<i<<"th row:";
        cin>>val;
        last=arr[i];
        for(int j=0;j<val;j++)
        {
            node *p= new node;
            cout<<"Enter values of col and data";
            cin>>p->col>>p->data;
            p->next=NULL;
            last->next=p;
            last=p;
        }
    }
}

void display(node *arr,int row, int col)
{
    for(int i=0;i<row;i<++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i]->
        }
    }
}

int main()
{
    int row, col;
    cout<<"Enter size of sparse Matrix(m*n): ";
    cin>>row>>col;
    struct node *arr[row];
    create(int row);
    return 0;

}