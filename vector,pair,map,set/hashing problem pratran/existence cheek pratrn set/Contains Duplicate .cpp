#include <bits/stdc++.h>
using namespace std;
bool check(vector<int>&vec){
    
    unordered_set<int>st;
    
    for(auto x:vec){
        if(st.find(x)!=st.end()){
            return true;
        }
        st.insert(x);
    }
    
    return false;
    
    
  //  return st.size()<vec.size();      for optimize code....
    
    
}
int main() {
   vector<int>v={1,2,3,3,4};
   
    int ans=check(v);
    
    if(ans){
        cout<<"true"<<endl;
    }
    else cout<<"false"<<endl;

}
