#include <bits/stdc++.h>
using namespace std;

int main() {
	
     deque<int>dq;
     
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    
    
    cout<<"size = "<<dq.size()<<endl;
   
   cout<<dq.front()<<endl;
    
    dq.push_front(5);
    
    
    cout<<"After push front - "<<dq.front()<<endl;
    
    dq.pop_front();
    
    cout<<"after pop front - "<<dq.front()<<endl;
    
    dq.pop_back();
    
    cout<<"after pop back - "<<dq.back()<<endl;
    
    
    
    deque<int>tem=dq;
     while(!tem.empty()){
        cout<<tem.front()<<" ";
        tem.pop_front();
        
    }
    
}
