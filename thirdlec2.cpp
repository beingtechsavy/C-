#include <iostream>
using namespace std ;
int main(){
    // a program to print the max no between 472
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if (a>b)
    {
        if (a>c)
        {
            cout<<" a is the largest";
        }
        else{
            cout<<"c is the largest";
            }
    }
    else{
        if (b>c){
            cout<<"b is the largest";
        }
        else{
            cout<<"c is the largest";
        }
    }
    return 0;
    }