#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int>a,pair<int,int>b){
    return a.second>b.second;
}
    
    

int main() {
	priority_queue<pair<int,int>,vector<pair<int,int>>,decltype(&compare)>pq(compare);  //decltype() for assign the type function address.
	
	pq.push({5,300});
	pq.push({7,100});  
	pq.push({3,520});
	
	cout<<pq.top().first<<" "<<pq.top().second<<endl;
	cout<<">>>>>>>>>>>>>>>>>>"<<endl;
	while (!pq.empty()){
	    cout<<pq.top().first<<" "<<pq.top().second<<endl;
	    pq.pop();
	   
	}

}
