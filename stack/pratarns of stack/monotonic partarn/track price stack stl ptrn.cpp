#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    vector<int>price={100,80,60,70,60,75,85};
    
    int n=price.size();
    
    stack<int>st;
    vector<int>ans(n,0);
    
    for(int i=0;i<n;i++){
        
        
        while(!st.empty() && price[st.top()]<=price[i]){
            
            st.pop();
            
        }
        
        if(st.empty()){
            ans[i]=i+1;
        }
        
        else{
            ans[i]=i-st.top();
        }
        
        st.push(i);
        
    }
    for(auto x:ans){
        cout<<x<<" ";
    }
    
    
}
