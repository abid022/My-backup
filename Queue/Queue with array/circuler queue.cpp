#include <bits/stdc++.h>
using namespace std;
                           // first in first out.
int arr[5];
int front=0;
int rear=0;
int itcount=0;

void enqueue(int value){
    if(itcount==5){
        cout<<"Queue is full"<<endl;     //overflow check;
        return;
    }
    arr[rear]=value;
    rear=(rear+1)%5;
    itcount++;
}

void dequeue(){
    if(itcount==0){
        cout<<"Queue is empty"<<endl;   // is empty or not.
        return;
    }
    front=(front+1)%5;
    itcount--;
}

void display(){
    
    if(itcount==0){
        cout<<"Queue is empty"<<endl;   // is empty or not. if we don't dequeue.
        return;
    }
    int index= front;
    
    for(int i=0;i<itcount;i++){
        cout<<arr[index]<<" ";
        index=(index+1)%5;
    }
    cout<<endl;
    
}

int main() {
	enqueue(10);
	enqueue(20);        //push
	enqueue(30);
	enqueue(40);
	enqueue(50);

	display();          
	
	dequeue();             
	dequeue();
	
	display();      // after dequeue;
	enqueue(60);
	enqueue(70);
	
	display();
	
}
