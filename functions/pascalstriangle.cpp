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
    int a;
    cin>>a;
    for (int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j);
        }
        cout<<endl;
    }
}