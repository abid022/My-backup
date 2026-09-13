#include <bits/stdc++.h>
using namespace std;

int arr[5];
int front = -1;
int rear = -1;
int cont = 0;

void insertrear(int valu){
    if(cont==5){
        cout<<"Deque is full"<<endl;;
        return;
    }
    
    if(cont==0){
        front=0;
        rear=0;
    }
    else{
        rear=(rear+1)%5;
    }
    arr[rear]=valu;
    cont++;
    
}

void insertfront(int value){
    if(cont==5){
        cout<<"front is full"<<endl;
        return;
    }
    if(cont==0){
        front=0;
        rear=0;
    }
    else{
        front=(front-1+5)%5;
    }
    
    arr[front]=value;
    cont++;
}

void deletefront(){
    if(cont==0){
        cout<<"Deque is empty "<<endl;
        return;
    }
    
    if(cont==1){
        front=-1;
        rear=-1;
        cont=0;
    }
    else{
        front=(front+1)%5;
        cont--;
    }
}
void deleterear(){
    if(cont==0){
        cout<<"Deque is empty"<<endl;
        return;
    }
    
    if(cont==1){
        front=-1;
        rear=-1;
        cont=0;
    }
    else{
        rear=(rear-1+5)%5;
        cont--;
    }
}
void display(){
    if(cont==0){
        cout<<"Deque is empty"<<endl;
        return;
    }
    int index=front;
    for(int i= 0;i<cont;i++){
        cout<<arr[index]<<" ";
        index=(index+1)%5;
    }
    cout<<endl;
}
int main() {
    
    
    insertrear(10);
    insertrear(20);
    insertrear(30);
    
    display();
    insertfront(5);
    
    display();
    deletefront();
    
    
    display();
    
    deleterear();
    display();
    
}
