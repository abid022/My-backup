#include <bits/stdc++.h>
using namespace std;
                           // first in first out.
int arr[5];
int front=0;
int rear=0;

void enqueue(int value){
    if(rear==5){
        cout<<"Queue is full"<<endl;     //overflow check;
        return;
    }
    arr[rear]=value;
    rear++;
}

void dequeue(){
    if(front==rear){
        cout<<"Queue is empty"<<endl;   // is empty or not.
        return;
    }
    front++;
}

void display(){
    
    if(front==rear){
        cout<<"Queue is empty"<<endl;   // is empty or not. if we don't dequeue.
        return;
    }
    for(int i=front;i<rear;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main() {
	enqueue(10);
	enqueue(20);        //push
	enqueue(30);
	enqueue(40);
	enqueue(50);
	enqueue(60);
	display();          //print
	
	dequeue();             //dequeue
	
	display();             // after dequeue;
}
