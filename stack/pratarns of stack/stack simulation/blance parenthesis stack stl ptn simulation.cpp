#include <bits/stdc++.h>
using namespace std;

bool isblanced(string s){
    stack<char>st;
    
    for(char ch:s){
        
        if(ch=='('||ch=='{'||ch=='['){
            st.push(ch);
        }
        else{
            if(st.empty()){
                return false;
            }
            
            if((ch==')'&& st.top()=='(')||
            (ch=='}'&& st.top()=='{')||
            (ch==']'&& st.top()=='[')){
                st.pop();
            }
            
            else{
                return false;
            }
        }
        
        
    }
    return st.empty();
}
int main() {
	// your code goes here
    string s="[{()}]";
    
    if(isblanced(s)){
        cout<<"Blanced"<<endl;
    }
    else{
        cout<<"Not Blanced"<<endl;
    }
    
}
