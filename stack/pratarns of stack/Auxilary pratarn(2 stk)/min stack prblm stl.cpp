#include <bits/stdc++.h>
using namespace std;

stack <int>st;
stack<int>minst;

void push(int x){
    st.push(x);
    
    if(minst.empty() || x <= minst.top()){
        minst.push(x);
    }
    
    
}
void pop(stack<int>&st){
    
    if(st.empty()) return;
    
    if(st.top()==minst.top()){
        minst.pop();
    }
    
    st.pop();
}

int getmin(){
    return minst.top();
}
int main(){
    
    push(5);
    push(3);
    push(7);
    push(2);
    
    cout<<st.top()<<endl;
    cout<<"min -"<<getmin()<<endl;
    
    
    pop(st);
    cout<<st.top()<<endl;
    cout<<"min -"<<getmin()<<endl;
    
    pop(st);
    cout<<st.top()<<endl;
    cout<<"min -"<<getmin()<<endl;
    
    
}


	
	
	
	
	
	
	
	


