#include <bits/stdc++.h>
using namespace std;

vector<int>func(vector<int>&a,vector<int>&b){
    
    unordered_set<int>s1;
    for(auto c:a){
        s1.insert(c);
        
    }
    unordered_set<int>s2;
    for(auto c:b){
        s2.insert(c);
    }
    
    vector<int>vc1;
    
    for(auto x:s1){
        if(s2.find(x)!=s2.end()){
            vc1.push_back(x);
        }
    }
    
    return vc1;
}

int main() {
	vector<int>arr1={1,3,4};
	vector<int>arr2={2,5,6,1};
	
	vector<int>ans=func(arr1,arr2);
	
	for(auto x:ans){
	    cout<<x<<" ";
	}

}
