#include <bits/stdc++.h>
using namespace std;

int main() {
   priority_queue<int,vector<int>,greater<int>>pq;
   
   vector<int>a={1,3,5};
   vector<int>b={2,4,6};
   
   for(auto x:a){
       pq.push(x);
   }
   
   for(auto x:b){
       pq.push(x);
   }
   
   while(!pq.empty()){
       cout<<pq.top()<<" ";
       pq.pop();
   }
   
   
   
   
   
}
