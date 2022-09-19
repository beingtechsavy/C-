#include <iostream>
using namespace std;
int fact(int n){
    int d=1;
    for (int i=1;i<=n;i++){
        d*=i;

    }
    return d;
}
int ncr(int n,int r){
    int nfact=fact(n);
    int nminrfact=fact(n-r);
    int rs=fact(r);
    int result;
    result=nfact/(nminrfact * rs);
    return result;


}
int main(){

    int n,r;
    cout<<"enter the total number of values"<<endl;
    cin>>n;
    cout<<"enter the number of objects to choose"<<endl;
    cin>>r;
    cout<<ncr(n,r);   


    return 0;
}