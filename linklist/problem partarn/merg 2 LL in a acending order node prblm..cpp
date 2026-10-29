#include <bits/stdc++.h>
using namespace std;
struct node{
   int data;
   node *next;
   
};

node *result(node *head, node *head1){
    
    node *fack=new node;
    fack->data=0;
    fack->next=NULL;
    
    node *tell=fack;
    node *p1=head;
    node *p2=head1;
    
    
    while(p1 != NULL && p2 !=NULL){
        
        if(p1->data <= p2->data){
            tell->next=p1;
            p1=p1->next;
        }
        
        else{
            tell->next=p2;
            p2=p2->next;
        }
        
        tell=tell->next;
    }
    if(p1 != NULL){
        tell->next=p1;
    }
    
    else{
        tell->next=p2;
        
    }
    return fack->next;
    
}
int main() {
	node *first=new node;
	first->data=10;
	first->next=NULL;
	
	
	
	
	node *third=new node;
	third->data=30;
	third->next=NULL;
	
	
	node *fift=new node;
	fift->data=50;
	fift->next=NULL;
	
	
	first->next=third;
	third->next=fift;
	
	
   	node *second=new node;
	second->data=20;
	second->next=NULL;
	
	
	node *fourth=new node;
	fourth->data=40;
	fourth->next=NULL;
	
	node *sixth=new node;
	sixth->data=60;
	sixth->next=NULL;
	
	second->next=fourth;
	fourth->next=sixth;
	
	
	
	
	node *tem=result(first,second);
	
	while(tem != NULL){
	    cout<<tem->data<<" ";
	    tem=tem->next;
	}
	

}
