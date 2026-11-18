#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    vector<int>hight={2, 1, 5, 6, 2, 3};
    
    int n=hight.size();
    
    stack<int>st;
    vector<int>pse(n),nse(n);
    
   for(int i=0;i<n;i++){
       
      while(!st.empty() && hight[st.top()]>=hight[i]){
          st.pop();
      }
      
      if(st.empty()){
          pse[i]=-1;
      }
      
      else{
          pse[i]=st.top();
      }
       
       st.push(i);
   }
   
   while(!st.empty()){
       st.pop();
   }
   
   for(int i=n-1;i>=0;i--){
       
       while(!st.empty() && hight[st.top()]>=hight[i]){
           st.pop();
       }
       
       if(st.empty()){
           nse[i]=n;
       }
       
       else{
           nse[i]=st.top();
       }
       
       st.push(i);
   }
    int mxi=0;
    
    for(int i=0;i<n;i++){
        
        int width=nse[i]-pse[i]-1;
        int area=hight[i]*width;
        
        mxi=max(mxi,area);
        
    }
    
    cout<<mxi;
}
