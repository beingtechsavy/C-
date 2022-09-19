#include <iostream>
using namespace std ;
int add(int a,int b){
    int sum=a+b;
    return sum;
}
int factorial(int n){
    int fact=1;
    for (int  i = 0; i < n; i++)
    {
        /* code */
        fact*=n-i;
    }
    return fact;
    
}
int main(){
   int n,r;
   cin>>n>>r;
   int ans=factorial(n)/(factorial(r)-factorial(n-r));
   cout<<ans;
    return 0;
}