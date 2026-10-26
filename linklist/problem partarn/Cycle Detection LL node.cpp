#include <bits/stdc++.h>
using namespace std;
struct node{
  int data;
  node *next;
};
int main() {
	// your code goes here
    node *first=new node;
    first->data=10;
    first->next=NULL;
    
    node *second=new node;
    second->data=20;
    second->next=NULL;
    
    node *third=new node;
    third->data=30;
    third->next=NULL;
    
    node *fourth=new node;
    fourth->data=40;
    fourth->next=NULL;
    
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=second;
    
    node *slow=first;
    node *fast=first;
    
    while(fast != NULL && fast->next != NULL){
        
        slow=slow->next;
        fast=fast->next->next;
        
        if(slow == fast){
            cout<<"chycle detect in LL"<<endl;
            
            break;
        }
        
        
    }
}
