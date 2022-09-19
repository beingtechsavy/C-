#include <iostream>
using namespace std;
int sum(int n){

    int sum=(n*(n+1))/2;
    return sum;

}
int main(){

    cout<<"enter the number of first natural numbers\n";
    int num;
    cin>>num;
    int res;
    res=sum(num);
    cout<<"the sum is \n"<<res;
    return 0;
}