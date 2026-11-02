#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    
};
bool ispalindrom(node *first){
    
    if(first==NULL || first->next==NULL){
        
        return true;
        
    }
    
    node *slow=first;
    node *fast=first;
    
    while(fast != NULL && fast->next != NULL){
        slow=slow->next;
        fast=fast->next->next;
        
    }
    
    node *prev=NULL;
    node *curnt=slow;
    
    while(curnt!=NULL){
        node *next=curnt->next;
        curnt->next=prev;
        
        prev=curnt;
        curnt=next;
    }
    
    node *p1=first;
    node *p2=prev;
    
    while(p2 != NULL){
        if(p1->data !=p2->data){
            return false;
        }
        
        p1=p1->next;
        p2=p2->next;
    }
    return true;
    
}
int main() {
    
    node *first=new node{1,NULL};
    first->next =new node{2,NULL};
    first->next->next=new node{3,NULL};
    first->next->next->next=new node{2,NULL};
    first->next->next->next->next=new node{1,NULL};
   /* 
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fift;
    */
    
    bool ans=ispalindrom(first);
    
    if(ans){
        cout<<" list palindrom"<<endl;
    }
    else {
        cout<<"not palindrom"<<endl;
    }
    
    
}
