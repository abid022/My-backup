#include <bits/stdc++.h>
using namespace std;

bool func(vector<int>&arr,int terget){
    
    unordered_map<int,int>mp;
    
    
   for(int i=0;i<arr.size();i++){
       
       if(mp.find(arr[i])!=mp.end()){
           if( abs(mp[arr[i]]-i)<=terget){
               return true;
           }
          
       }
       mp[arr[i]]=i;
       
   }
   
    return false;
   
    
}
int main() {
	vector<int>arr={1,1,2,3,1};
	
	int terget=3;
	
	int res=func(arr,terget);
	
	if(res){
	    cout<<"true"<<endl;
	}
	
	else{
	    cout<<"false"<<endl;
	}
}
