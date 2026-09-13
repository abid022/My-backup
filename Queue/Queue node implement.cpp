#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    
};

node *front=NULL;
node *rear=NULL;
//enqueue
void enqeue(int value){
    
    node *newnode= new node;
    newnode->data=value;
    newnode->next=NULL;
    
    //Queue empty
    
    if(front==NULL){
        front=newnode;
        rear=newnode;           
    }
    else{
        rear->next=newnode;
        rear=newnode;               //queue not empty
    }
}

//dequeue

void dequeue(){
    if(front==NULL){
        cout<<"Queue is empty"<<endl;
        return;
    }
    node *tem=front;
    
    front=front->next;
    delete tem;
    
    // if queue got empty;
    
    if(front==NULL){
        rear=NULL;
    }
}
// display

void dispaly(){
    if(front==NULL){
        cout<<"queue is empty"<<endl;
        return;
    }
    node *tem=front;
    
    while(tem != NULL){
        cout<<tem->data<<" ";
        tem=tem->next;
    }
    cout<<endl;
}

int main() {
    enqeue(10);
    enqeue(20);
    enqeue(30);
   
    dispaly();
    
    dequeue();
    dispaly();
    
     enqeue(40);
     
     dispaly();
     
     dequeue();
     dequeue();
     dequeue();
     
     dispaly();
}
