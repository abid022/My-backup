#include <bits/stdc++.h>
using namespace std;

int main() {
	
     queue<int>q;
     
     q.push(10);
     q.push(20);
     q.push(30);
     
     cout<<"Size = "<<q.size()<<endl;
   /* 
   
     while(!q.empty()){
         cout<<q.front()<<" ";         // main queue will change 
         q.pop();
     }
     
     q.pop();
     
     cout<<q.front()<<endl;  //see front after pop
     
     cout<<q.back()<<endl;  //see rear ;
     
     if(q.empty()){
         cout<<"Queue is empty"<<endl;
     }
     else{
         cout<<"not empty"<<endl;
     }
     
     */
     
     
     queue<int>tem=q;
     
     while(!tem.empty()){
         cout<<tem.front()<<" ";
         tem.pop();                  // with out pop the orginal queue;
     }
}
