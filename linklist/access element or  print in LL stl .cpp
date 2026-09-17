#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    list<int>l;
    int n;
    cin>>n;
    int x;
    
    
    for(int i=0;i<n;i++){
        cin >> x;
        
        l.push_back(x);
    }
    
    int mid=l.size()/2;
    
    auto it=l.begin();
    
    advance(it,mid);
    
    if(*it%2 ==0){
        it--;
        cout<<*it<<endl;
    }
    else{
        cout<<*it;
    }
  

    
    
    
}
  
   

