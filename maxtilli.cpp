#include <iostream>
using namespace std;
int main(){

    int mx=INT32_MIN;
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[n];

    }
    for (int i=0;i<n;i++){
    
        mx=max(mx,a[i]);
        cout<<mx<<' ';
    }
    return 0;
}