#include <bits/stdc++.h>
using namespace std;
struct node{
   int data;
   node *next;
   
};

int main() {
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
	
	
	node *nul=new node;
	nul->data=0;
	nul->next=NULL;
	
	nul->next=first;
	
	node *fast=nul;
	node *slow=nul;
	
	int n=3;
	
    for(int i=0;i<=n;i++){
        fast=fast->next;
        
    }
    
    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next;
        
        
    }
	
	node *del=slow->next;
	slow->next=slow->next->next;
	delete del;
	
	node *tem=nul->next;
	
	while(tem != NULL){
	    cout<<tem->data<<" ";
	    tem=tem->next;
	}
	

}
