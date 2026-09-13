#include <bits/stdc++.h>
using namespace std;

int arr[5];
int front=0;
int rear=0;

void enqueue(int value){
    arr[rear]=value;
    rear++;
}

void dequeue(){
    front++;
}

void display(){
    for(int i=front;i<rear;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main() {
	enqueue(10);
	enqueue(20);        //push
	enqueue(30);
	
	display();          //print
	
	dequeue();             //dequeue
	
	display();             // after dequeue;
}
