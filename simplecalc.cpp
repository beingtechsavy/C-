#include <iostream>
using namespace std ;
int main(){
    int n1,n2;
    cout<<"give 2 no.s";
    cin>>n1>>n2;
    char op;
    cout<<"input an operator";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<"the sum is ";
        cout<<n1+n2;
        break;
        case '-':
        cout<<"the result is ";
        cout<<n1-n2;
        break;
        case '*':
        cout<<"the result is ";
        cout<<n1*n2;
        break;
        case '/':
        cout<<"the result is ";
        cout<<n1/n2;
        break;
    
    default:
        cout<<"this is just a simple calculator";
        break;
    }
    return 0;
}