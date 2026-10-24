#include <bits/stdc++.h>
using namespace std;

int main() {
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	
	pq.push({7,2});
	pq.push({7,1});
	pq.push({3,5});
	
	cout<<pq.top().first<<" "<<pq.top().second<<endl;
	cout<<">>>>>>>>>>>>>>>>>>"<<endl;
	while (!pq.empty()){
	    cout<<pq.top().first<<" "<<pq.top().second<<endl;
	    pq.pop();
	   
	}

}


/* a>b = min heep;  if true

    a=5,b=3                  b -> 3
                             a -> 5

*/



/* a<b = max heep;  if true

     a=3,b=5                     b->5
                                 a->3

