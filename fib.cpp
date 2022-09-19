#include <iostream>
using namespace std ;
void fib(int n){
    int t1=0,t2=1;
    for (int i = 0; i<n; i++)
    {   cout<<t1<<endl;
        int t3=t1+t2;
        t1=t2;
        t2=t3;
    }
    return;
    
    
    
}
int main(){
    int number;
    cin>>number;

    fib(number);
    
    return 0;
}