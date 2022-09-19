#include <iostream>
using namespace std;
int main (){

    int num;
    cin>>num;
    int lastdigit;
    int reverse;
    reverse=0;
    while(num>0){
    lastdigit=num%10;
    reverse=reverse*10+lastdigit;
    num/=10;}
    cout<<endl<<reverse<<endl;
    return 0;
}