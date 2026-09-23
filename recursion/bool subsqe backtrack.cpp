#include <bits/stdc++.h>
using namespace std;

bool sumofsubset(int index,vector<int>&arr,int terget,vector<int>&curentsub){
    
    if(index==arr.size()){
        int sum=0;
        for(int x:curentsub){
            sum+=x;
        }
        if(sum==terget){
            
            return true;
        }
        
        return false;
    }
    
    curentsub.push_back(arr[index]);
    
    if(sumofsubset(index+1,arr,terget,curentsub)==true)return true;
    
    curentsub.pop_back();
    
   if( sumofsubset(index+1,arr,terget,curentsub)==true) return true;
    
    return false;
}

int main() {
    
    vector<int>arr={3,1,2};
    int terget=3;
    
   vector<int>curentsub;
 // vector< vector<int>>result;
   
   sumofsubset(0,arr,terget,curentsub);
   
 /*  for(auto &x:result){
       
       for(int n:x){
           cout<<n<<" ";
       }
       cout<<endl;
   }
*/
    int bol=sumofsubset(0,arr,terget,curentsub);
    
    if(bol) cout<<"true"<<endl;
    else cout<<"false"<<endl;

}
