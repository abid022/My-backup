#include <bits/stdc++.h>
using namespace std;
string getdiff(string s){
    
    string key="";
    
    for(int i=1;i<s.size();i++){
        
        int dif=s[i]-s[i-1];
        
        if(dif<0){
            dif+=26;
        }
        
        key +=to_string(dif)+",";
        
        
    }
    return key;
    
}

vector<vector<string>>func(vector<string>&str){
    
    
    unordered_map<string,vector<string>>mp;
    
    for(auto x:str){
        string key=getdiff(x);
        mp[key].push_back(x);
    }
    
    vector<vector<string>>reslt;
    for(auto x:mp){
        reslt.push_back(x.second);
    }
    return reslt;
    
}
int main() {
	vector<string> strs = {"abc", "bcd", "acef", "xyz", "az", "ba", "a", "z"};
    
    
    vector<vector<string>>ans=func(strs);
    for(auto &x:ans){
        for(auto c:x){
            cout<<c<<" ";
        }
        cout<<endl;
    }
    
    
}
