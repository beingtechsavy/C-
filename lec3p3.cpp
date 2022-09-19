#include <iostream>
using namespace std;
int main (){

  //  int i;
    //i=1;
    //i=i++ + ++i;
    //cout<<i;
    int num;
    cout<<"enter the number to be compared to 10";
    cin>>num;
    if (num>10){
        cout<<"the number is greater than 10\n";
    }
    else if (num<10)
    {
        cout<<"the number is lesser than 10\n";
    }
    else
    {
        /* code */
        cout<<"number is equal to 10\n";
    }
    // the usage of left shift operator is as follows:-
    //a<<n a*2^n
    int a=10;
    cout<<(a<<2)<<"\n";
    //so what the left shift does is that it shifts the charachter one more time in the binary scale towards left.
    //similiarly for right shift we have a>>n  is a/2^n so 
    cout<<(a>>2)<<"\n";
    return 0;
}