#include <bits/stdc++.h>
using namespace std;
void findsubsqn(int index,vector<int>&arr,vector<int>&currentsub,vector<vector<int>>&result){
    
    if(index==arr.size()){
        result.push_back(currentsub);
        return;
    }
    
    currentsub.push_back(arr[index]);
    findsubsqn(index+1,arr,currentsub,result);
    
    currentsub.pop_back();
    
    findsubsqn(index+1,arr,currentsub,result);
    
}
int main() {
    
    vector<int>arr={3,1,2};
    
    vector<int>currentsub;
    vector<vector<int>>result;
    
    findsubsqn(0,arr,currentsub,result);
    
    cout<<"subsubsequence"<<endl;
    
    for(auto &x:result){
        cout<<"[ ";
        
        for(int num : x ){
            cout<<num<<" ";
        }
        cout<<"]"<<endl;
    }

}
