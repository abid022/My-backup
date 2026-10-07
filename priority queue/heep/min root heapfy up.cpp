#include <bits/stdc++.h>
using namespace std;

int main() {
	int heep[100]={10,20,15};
	int size=3;
	
	int value=5;
	
	heep[size]=value;
	size++;
	
	int i=size-1;
	
	while(i>0){
	    int  parent=(i-1)/2;
	    
	    if(heep[i]<heep[parent]){
	        swap(heep[i],heep[parent]);
	        
	        i=parent; //prant posision will be new i th possion;
	    }
	    else{
	        break;
	    }
	    
	}
   
   for(int i=0;i<size;i++){
       cout<<heep[i]<<" ";
   }
}
