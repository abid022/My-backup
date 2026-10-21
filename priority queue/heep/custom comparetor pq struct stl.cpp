#include <bits/stdc++.h>
using namespace std;
struct compare{
  bool operator()(pair<int,int>a,pair<int,int>b){
      return a.second > b.second;
  }  
    
            //operator()- is use for call object like a function.|| function call operator  ||
    
};
int main() {
	priority_queue<pair<int,int>,vector<pair<int,int>>,compare>pq;
	
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
