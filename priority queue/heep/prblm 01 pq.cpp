#include <bits/stdc++.h>
using namespace std;

int main() {
   priority_queue<int>pq;
   
   vector<int>v={10,40,20,50,30};
   int n=3;
   for(auto x:v){
       pq.push(x);
   }
   
  // priority_queue<int>tem=pq;
   
   for(int i=1;i<n;i++){
       pq.pop();
   }
   
   cout<<pq.top()<<endl;
   
}
