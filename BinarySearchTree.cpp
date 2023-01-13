#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *left, *right;
}*root=NULL;

void insert(struct Node *p, int val)
{
    if(root==NULL){
        p =new Node;
        root=p;
        root->data= val;
        root->left=NULL;
        root->right=NULL;
    }
    else
    {
        if(p==NULL)
        {
            p =new Node;
            p->data= val;
            p->left=NULL;
            p->right=NULL;
        }

        else
        {
            if(root->data>val){
                insert(p->left,val);

            }
            else
            {
                insert(p->right,val);
            }        
        }
    }
}
void preorder(struct Node *p)
{
    if(p==NULL)
    {
        return;
    }
    else
    {
        cout<<p->data;
        preorder(p->left);
        preorder(p->right);
    }
    
}

int main()
{
    insert(root,5);
    insert(root,1);
    insert(root,3);
    insert(root,7);
    insert(root,2);
    insert(root,4);
    insert(root,6);
    preorder(root);
    return 0;
}
