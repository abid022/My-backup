#include <bits/stdc++.h>
using namespace std;

/*
int fib(int n){
    
    if(n==0)return 0;
    if(n==1)return 1;
    
   return fib(n-1) +  fib(n-2);
    
    
    
}
*/

int fib2(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    
    int a=fib2(n-1);
    int b=fib2(n-2);
    
    cout<<"fib ("<<n<< ") ="<<a<<" + "<<b<<" = "<<a+b <<endl;
    
    return a+b;
}
int main() {
	// your code goes here
   
  cout<< fib2(4);


}





 /*                    fib(4)
                      /      \
                 fib(3)   +   fib(2)
                /      \     /      \
            fib(2)  + fib(1) fib(1) + fib(0)
            /    \      |      |        |
        fib(1) + fib(0) (1)   (1)      (0)

          |        |
         (1)      (0)
*/
