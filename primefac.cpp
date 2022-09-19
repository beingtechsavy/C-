#include <iostream>
using namespace std;
// program to check the number is prime or not
int main(){
    int n;
    cin>>n;
    for (int i=2;i<n;i++){
        if (n%i==0){
            cout<<n<<"  is not a prime number it gets divided by    "<<i<<"\n";
            break;

        }
    if (i==n-1){
        cout<<"prime number";
    }
    }
   
    return 0;
}