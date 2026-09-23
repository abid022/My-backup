#include <bits/stdc++.h>
using namespace std;

int subsqe(int index,vector<int>&arr,vector<int>&curntsub, int terget){
    
    
    if(index==arr.size()){
        
        int sum=0;
        
        for(auto x:curntsub){
            sum+=x;
        }
        if(sum==terget){
            
          //result.push_back(curntsub);
          return 1;
        }
        return 0;
    }
    
    curntsub.push_back(arr[index]);
    
   int l=subsqe(index+1,arr,curntsub,terget);
    
    curntsub.pop_back();
    
   int r=subsqe(index+1,arr,curntsub,terget);
    
    
    return l+r;
    
    
    
}
int main() {
	vector<int>arr={3,1,2};
	
	vector<int>curntsub;
//	vector<vector<int>>result;
	
	int terget=3;
	
     int  num_of_subsq=subsqe(0,arr,curntsub,terget);
	
  cout<<num_of_subsq;
  
  

}
