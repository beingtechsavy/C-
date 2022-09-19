#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int adder;
    cout<<"enter the number to append\n";
    cin>>adder;
    int newarr[n+1];
    newarr[n]=adder;
    for (int i=0;i<n;i++){
        newarr[i]=arr[i];
    }
    for (int i=0;i<=n;i++){
        cout<<newarr[i]<<' ';
    }
    return 0;
}