#include <bits/stdc++.h>
using namespace std;

int main() {
   priority_queue<int,vector<int>,greater<int>>pq;
   
   vector<int>v={10,40,20,50,30};
   int n=2;
   for(auto x:v){
       pq.push(x);
   }
   
                  //complixity (O(n + k\log n))
   
   for(int i=1;i<n;i++){
       pq.pop();
   }
   
   cout<<pq.top()<<endl;
   
}
