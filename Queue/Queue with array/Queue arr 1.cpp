#include <bits/stdc++.h>
using namespace std;


int main() {
	int arr[5];
	
	 int front=0;
	 int rear=0;
	 
	 //Enqueue
	 
	 arr[rear]=10;
	 rear++;
	 
	 arr[rear]=20;
	 rear++;
	 
	 arr[rear]=30;
	 rear++;
	 
	 for(int i=front;i<rear;i++){
	     cout<<arr[i]<<" ";             // print queue
	 }
	 cout<<endl;
	 
	 //Dequeue
	 
	 
	 front++;
	 
	 for(int i=front;i<rear;i++){
	     cout<<arr[i]<<" ";                  // after Dequeue
	 }
      cout<<endl;
	

}
