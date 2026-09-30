#include <bits/stdc++.h>
using namespace std;
vector<vector<string>>func(vector<string>str){
    unordered_map<string,vector<string>>mp;
    
    for(auto x:str){
        
        string tem=x;
        
        sort(tem.begin(),tem.end());
        
        mp[tem].push_back(x);
        
        
    }
    vector<vector<string>>ans;
    for(auto x:mp){
        ans.push_back(x.second);
    }
    
    return ans;
    
}

int main() {
	vector<string>str={"eat","ate","tea","tan","ant","bat"};
	
    
    vector<vector<string>>s=func(str);
    
    for(auto &x:s){
        for(auto c:x){
            cout<<c<<" ";
        }
        cout<<" || ";
    }
}
