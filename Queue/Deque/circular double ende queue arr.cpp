#include <bits/stdc++.h>
using namespace std;

int arr[5];
int front =-1;
int rear =-1;

void insertrear(int valu){
    if(rear==4){
        cout<<"Deque is full";
        return;
    }
    
    if(front==-1){
        front=0;
    }
    rear++;
    arr[rear]=valu;
}

void insertfront(int value){
    if(front==0){
        cout<<"front is full";
        return;
    }
    front--;
    arr[front]=value;
}
void deletefront(){
    if(front==-1){
        cout<<"Deque is empty ";
        return;
    }
    front++;
    if(front>rear){
        front=-1;
        rear=-1;
    }
}
void deleterear(){
    if(front==-1){
        cout<<"Deque is empty";
        return;
    }
    rear--;
    if(front>rear){
        front=-1;
        rear=-1;
    }
}
void display(){
    if(front==-1){
        cout<<"Deque is empty"<<endl;
        return;
    }
    
    for(int i= front;i<=rear;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
    
    
    insertrear(10);
    insertrear(20);
    insertrear(30);
    
    display();
    deletefront();
    insertfront(5);
    
    display();
    
    deleterear();
    display();
    
}
