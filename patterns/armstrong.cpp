#include <iostream>
#include <math.h>
using namespace std;
int main(){

    int n;
    int c;
    int origin=n;
    cin>>n;
    int lastdigit,armstrongno;
    armstrongno=0;
    while (n>0)
    {
        /* code */
        lastdigit=n%10;
        cout<<lastdigit<<endl;
        c=pow(lastdigit,3);
        cout<<c<<endl;
        armstrongno+=c;
        n/=10;
        cout<<armstrongno<<endl;   
    }
    
    if (armstrongno==origin){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}