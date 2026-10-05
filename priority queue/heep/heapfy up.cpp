#include <bits/stdc++.h>
using namespace std;                //  Heapify up;

int main() {
	int heep[100]={50,30,40};
	int size=3;
	
	int value=45;
	
	heep[size]=value ;  // size = 3 thats why index 3=45;
	
	size++;
	
	int i=size-1;   //index of new element;
	
	while(i>0){
	    int parent=(i-1)/2;   // finding parent
	    
	    if(heep[i]>heep[parent]){
	        swap(heep[i],heep[parent]);
	        
	        i=parent;     //index 1 =45 is now parent;
	        
	        
	    }
	    else{
	        break;
	    }
	    
	    
	}
	for(int i=0;i<size;i++){
	        cout<<heep[i]<<" ";    //print heep;
	    }
     
}
