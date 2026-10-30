#include <bits/stdc++.h>
using namespace std;
struct node{
  int data;
  node *next;
  
};
node *intersection(node *headA , node *headB){
    
    node *p1=headA;
    node *p2=headB;
    
    while(p1 != p2){
        
        if(p1==NULL){
            p1=headB;
        }
        
        else p1=p1->next;
        
        if(p2==NULL){
            p2=headA;
            
        }
        else p2=p2->next;
        
        
    }
    return p1;
    
}

int main() {
	node *common=new node{8,NULL};
	common->next=new node{10,NULL};
	
	node *headA=new node{4,NULL};     //list a; 4 -> 1 -> 8 -> 10
	headA->next=new node{1,common};
	
	node *headB=new node{5,common};   //list b; 5 -> 8 -> 10 
	
	node *ans=intersection(headA,headB);
	if (ans != NULL)
        cout << "Intersection at: " << ans->data << endl;
    else
        cout << "No intersection" << endl;
    
}
