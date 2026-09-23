#include <bits/stdc++.h>
using namespace std;

void subsqe(int index,vector<int>&arr,vector<int>&curntsub, int terget,vector<vector<int>>&result){
    
    
    if(terget==0){
      result.push_back(curntsub);
      return;
      
    }
    
    if(index==arr.size()){
        return;
    }
    
    curntsub.push_back(arr[index]);
    if(arr[index]<=terget){
   subsqe(index,arr,curntsub,terget-arr[index],result);
    
    curntsub.pop_back();
    }
    
   subsqe(index+1,arr,curntsub,terget,result);
    
    
    
    
    
    
}
int main() {
	vector<int>arr={3,1,2};
	
	vector<int>curntsub;
	vector<vector<int>>result;
	
	int terget=3;
	
    subsqe(0,arr,curntsub,terget,result);
	
    for(auto &x:result){
        for(auto n:x){
            cout<<n<<" ";
        }
        cout<<endl;
    }
  
  

}
