#include <bits/stdc++.h>                // delete;
using namespace std;                //  Heapify down;

int main() {
	int heep[100]={50,45,40,30,20};
	int size=5;
	
	heep[0]=heep[size-1];
	
	size--;
	
	int i=0;
	
	while (true){
	    int leftchild=2*i +1;
	    int rightchild=2*i+2;
	    
	    int lergest=i;            // let curent is lergest;
	    
	    if(leftchild < size && heep[ leftchild ]>heep[lergest]){
	        
	        lergest=leftchild;
	        
	    }
	    if(rightchild < size && heep[ rightchild ]>heep[ lergest ]){
	        
	        lergest=rightchild;
	    }
	    
	    if(lergest == i){
	        break;
	    }
	    
	    swap(heep[i],heep[lergest]);
	    
	    i=lergest;               // i comes to 1;     
	}
	
	for(int i=0;i<size;i++){
	    cout<<heep[i]<<" ";
	}
}
             
           