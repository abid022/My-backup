#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int>arr={2, 3, 2, 5, 3, 2};
	
	unordered_map<int,int>mp;
	for(auto x:arr){
	    mp[x]++;
	}
	
	priority_queue<pair<int,int>>pq ;
	
	for(auto x:mp){
	    pq.push({x.second,x.first});
	}
	
	while(!pq.empty()){
	    cout<<pq.top().second<<" ";
	    pq.pop();
	}

}
