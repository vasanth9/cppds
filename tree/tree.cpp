#include<bits/stdc++.h>
using namespace std;
struct Node 
{
    int data;
    Node * right;
    Node * left;
    Node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
void add(Node* r,Node *y)
{   
    if(y->data>r->data)
    {
        if(y->left!=NULL)
        {
            add(r,y->left);
        }
        else{
            y->left=r;
        }
    }
    else{
        if(y->right!=NULL)
        {
            add(r,y->right);
        }
        else{
            y->right=r;
        }
    }

}
void inorder(Node * y)
{
    if(y!=NULL)
    {
        if(y->left!=NULL)inorder(y->left);
        cout<<y->data<<"\t";
        if(y->right!=NULL)inorder(y->right);
    }
}
void preorder(Node * y)
{
    if(y!=NULL)
    {cout<<y->data<<"\t";
        if(y->left!=NULL)preorder(y->left);
        
        if(y->right!=NULL)preorder(y->right);
    }
}
void postorder(Node * y)
{
    if(y!=NULL)
    {
        if(y->left!=NULL)postorder(y->left);
        
        if(y->right!=NULL)postorder(y->right);
        cout<<y->data<<"\t";
    }
}

int main()
{

    Node *root=new Node(100);
    int n,x;
    Node * y; 
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        y=new Node(x);
        add(y,root);
    }
    inorder(root);
    cout<<"\n";
    preorder(root);
    cout<<"\n";
    postorder(root);
    cout<<"\n";
}
