#include <iostream>
using namespace std;
int fact(int n){
    int d=1;
    for (int i=1;i<=n;i++){
        d*=i;

    }
    return d;
}
int main(){

    cout<<"enter the number n";
    int n;
    cin>>n;
    cout<<"the factorial is "<<fact(n);

    return 0;
}