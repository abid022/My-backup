#include <bits/stdc++.h>
using namespace std;
void permutation(int index,vector<int>&arr,vector<vector<int>>&result){
    
    if(index==arr.size()){
        result.push_back(arr);
        return;
    }
    
    for(int i=index;i<arr.size();i++){
        
        swap(arr[index],arr[i]);
        
        permutation(index+1,arr,result);
        
        swap(arr[index],arr[i]);
        
    }
    
    
}
int main() {
	vector<int>arr={1,2,3};
	vector<vector<int>>result;
	
	permutation(0,arr,result);
	
	for(auto &x:result){
	    for(auto c:x){
	        cout<<c<<" ";
	    }
	    cout<<endl;
	}

}
