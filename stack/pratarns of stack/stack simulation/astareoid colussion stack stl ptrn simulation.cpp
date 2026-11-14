#include <bits/stdc++.h>
using namespace std;

int main() {
	
	stack<int>st;
	
	vector<int>lstastrid={5,10,-15};
	int n=lstastrid.size();
	for(int i=0;i<n;i++){
	    
	    bool alive=true;
	    if(st.empty()){
	        st.push(lstastrid[i]);
	    }
	    
	    else if(!st.empty() && lstastrid[i]>=0){
	        st.push(lstastrid[i]);
	    }
	    
	    else{
	        
	        while(!st.empty() && lstastrid[i]<0 && st.top()>0 ){
	            if(abs(lstastrid[i])>st.top()){
	                st.pop();
	               // st.push(lstastrid[i]);
	            }
	            else if(abs(lstastrid[i])==st.top()){
	                st.pop();
	                alive=false;
	                break;
	            }
	            else {
	                alive=false;
	                break;
	            }
	        }
	        
	        if(alive){
	            st.push(lstastrid[i]);
	        }
	        
	    }
	    
	    
	}
	
	vector<int>ans;
	
	while(!st.empty()){
	    ans.push_back(st.top());
	    st.pop();
	}
   
   
   for(int i=ans.size()-1;i>=0;i--){
       cout<<ans[i]<<" ";
   }
}
