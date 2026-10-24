#include <bits/stdc++.h>
using namespace std;

int main() {
	int heep[100]={10,20,15,30,40};
    int size=5;
    
    heep[0]=heep[size-1];
    size--;
    
    int i=0;
    
    while(true){
        int leftchild= 2*i+1;
        int rightchild= 2*i+2;
        
        int smallest=i;
        
        if(leftchild < size && heep[leftchild]<heep[smallest]){
           
            
            smallest=leftchild;
            
        }
        if(rightchild < size && heep[rightchild]<heep[smallest]){
            
            smallest=rightchild;
            
        }
        
        if(smallest==i){  
            break;
        }
        
        swap(heep[i],heep[smallest]);
        
        i=smallest;      //update i to 2(small);
    }
    for(int i=0;i<size;i++){
        cout<<heep[i]<<" ";
    }
}
