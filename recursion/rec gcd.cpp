#include <bits/stdc++.h>
using namespace std;
                                      // tis is gcd.
int gcd(int a,int b){
    
    if(b==0) return a;
                                       //GCD = Greatest Common Divisor
   return gcd(b,a%b);
                                        // 10=1,2,5,10 || 5=1,5 
}

int main() {
	
   
  
   cout<<gcd(10,5);  
  
}
