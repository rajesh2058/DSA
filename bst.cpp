#include<stdio.h> //binary search tree
#include<stdlib.h>
struct node // creating a node 
{
    int data;
    struct node *left;
    struct node *right;  
};
//creation of new node struct node *newnode (int x)
struct node *newnode(int x)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
//insertion
struct node *insert(struct node *root,int x)
{
    if(root==NULL){
    return newnode (x);
    }
    else if(x>root->data)
    {
   root->right=insert(root->right,x);
    }
    else
    {
    root->left=insert(root->left,x);
    return root;
    }
}
void inorder(struct node*root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\n",root->data);
        inorder(root->right);
    }
}
int main()
{
    struct node *root;
    root=newnode(20);
    insert(root,5);
    insert(root,1);
    insert(root,15);
    inorder(root);
    return 0;
}