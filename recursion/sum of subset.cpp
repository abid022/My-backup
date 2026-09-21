#include <bits/stdc++.h>
using namespace std;

void sumofsubset(int index,vector<int>&arr,int terget,vector<int>&curentsub,vector<vector<int>>&result){
    
    if(index==arr.size()){
        int sum=0;
        for(int x:curentsub){
            sum+=x;
        }
        if(sum==terget){
            result.push_back(curentsub);
        }
        
        return;
    }
    
    curentsub.push_back(arr[index]);
    
    sumofsubset(index+1,arr,terget,curentsub,result);
    
    curentsub.pop_back();
    
    sumofsubset(index+1,arr,terget,curentsub,result);
    
    
}

int main() {
    
    vector<int>arr={3,1,2};
    int terget=3;
    
   vector<int>curentsub;
  vector< vector<int>>result;
   
   sumofsubset(0,arr,terget,curentsub,result);
   
   for(auto &x:result){
       
       for(int n:x){
           cout<<n<<" ";
       }
       cout<<endl;
   }

}
