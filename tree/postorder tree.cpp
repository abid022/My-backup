#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
    
};

node *newnode(int value){
    
    node *tem= new node;
    
    tem->data=value;
    tem->left=NULL;
    tem->right=NULL;
    
    return tem;
    
}

void postordertrvsl(node *root){
    
    if(root == NULL) return;
    
    
    
    postordertrvsl(root->left);
   
    postordertrvsl(root->right);
    
     cout<<root->data<<" ";
    
    
    
}
int main() {
	
    node *root=newnode(10);
    
    root->left=newnode(20);
    root->right=newnode(30);
    
    root->left->left=newnode(40);
    root->left->right=newnode(50);
    
    root->left->left->left=newnode(60);
    root->left->left->right=newnode(70);


   postordertrvsl(root);
}
