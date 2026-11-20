#include <bits/stdc++.h>
using namespace std;


stack<int>st;
stack<int>mxst;

void push(int x){
    st.push(x);
    
    if(mxst.empty()|| x>=mxst.top()){
        mxst.push(x);
    }
    
}

void pop(){
   if(st.empty()) return;           // we use global varible so dont need to write [ stack<int>&st  ]
   
   if(st.top()==mxst.top()){
       mxst.pop();
   }
   
   st.pop();
}

int getmax(){
    return mxst.top();
}

int main() {
	
	push(5);
	push(3);
	push(7);
	push(2);
	
	cout<<st.top()<<endl;
	cout<<"max -"<<getmax()<<endl;
    
    pop(st);
    
    cout<<st.top()<<endl;
	cout<<"max -"<<getmax()<<endl;
	
	pop(st);
	
	cout<<st.top()<<endl;
	cout<<"max -"<<getmax()<<endl;
    
}
