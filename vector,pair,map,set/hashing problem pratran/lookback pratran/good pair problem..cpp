#include <bits/stdc++.h>
using namespace std;
int func(vector<int>&vec){
    unordered_map<char,int>mp;
    
    int sum=0;
    for(auto x:vec){
        sum+=mp[x];
        mp[x]++;
    }
    
    return sum;
    
}

int main() {
    
    vector<int>vec={1,2,3,1,1,3};

    int result=func(vec);
    
    cout<<result;

}
