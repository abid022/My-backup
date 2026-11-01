#include <bits/stdc++.h>
using namespace std;
struct node{
  int data;
  node *next;
  
};
node *removeduplct(node *headA ){
    
    node *crunt=headA;
   
    
    while(crunt != NULL && crunt->next != NULL){
        
        if(crunt->data == crunt->next->data){
            node *tem=crunt->next;
            crunt->next=tem->next;
            delete tem;
            
        }
        
        else{
            crunt=crunt->next;
        }
        
    }
    return headA;
}

int main() {
	
	node *headA=new node{1,NULL};
	headA->next=new node{1,NULL};
	headA->next->next=new node{2,NULL};
	headA->next->next->next=new node{3,NULL};
	headA->next->next->next->next=new node{3,NULL};
	
	node *tem=removeduplct(headA);
	
	while(tem != NULL){
	    cout<<tem->data<<" ";
	    tem=tem->next;
	}
	
    
}
