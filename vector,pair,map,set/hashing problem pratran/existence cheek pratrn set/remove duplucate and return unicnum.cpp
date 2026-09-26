#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>func(vector<int>&s,vector<int>&b){
    
    unordered_set<int>a1(s.begin(),s.end());
    
    unordered_set<int>a2(b.begin(),b.end());
    
    vector<int>ans1;
    vector<int>ans2;
    
    for(auto x:a1){
        if(a2.count(x)==0){
            ans1.push_back(x);
        }
    }
    
    for(auto x:a2){
        if(a1.count(x)==0){
            ans2.push_back(x);
        }
    }
    
    vector<vector<int>>vec;
    
    vec.push_back(ans1);
    vec.push_back(ans2);
    
    return vec;
    
    
}


int main() {
	// your code goes here
    
    vector<int>num1={1,2,3};
    
    vector<int>num2={2,4,6};

    vector<vector<int>>res=func(num1,num2);
    
    for(auto &x:res){
        for(auto m:x){
            cout<<m<<" ";
        }
        cout<<endl;
    }
    
    
}
