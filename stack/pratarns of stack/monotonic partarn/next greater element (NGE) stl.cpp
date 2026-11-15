#include <bits/stdc++.h>
using namespace std;

int main() {
	 vector<int> arr = {4, 5, 2, 10, 8};
	 stack<int>st;
	 vector<int>ans(arr.size());
	 
	 for(int i=arr.size()-1;i>=0;i--){
	     while(!st.empty() && arr[i]>=st.top()){
	         st.pop();
	     }
	     
	     if(st.empty()){
	         ans[i]=-1;
	     }
	     else{
	         ans[i]=st.top();
	     }
	     
	     
	     st.push(arr[i]);
	 }
	 
	 for(auto x:ans){
	     cout<<x<<" ";
	 }

}
