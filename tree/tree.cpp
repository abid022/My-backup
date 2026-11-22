#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
    
};
int main() {
	
	node *root=new node;
	
	root->data=10;
	root->left=NULL;
	root->right=NULL;
	
	
	root->left=new node;
	root->left->data=20;
	root->left->left=NULL;
	root->left->right=NULL;
	
    
    root->right=new node;
    root->right->data=30;
    root->right->left=NULL;
    root->right->right=NULL;
    
    
    cout << root->data << endl;
    cout << root->left->data << endl;
    cout << root->right->data << endl;
    //cout << root->left->right->data << endl;
}
