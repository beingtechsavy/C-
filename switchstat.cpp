#include <iostream>
using namespace std;


int main(){
    float a,b;
    cout<<"input 2 numbers\n";
    cin>>a;
    cin>>b;
    cout<<"now press\n (a) for add \n (s) for subtract \n (d) for divide  \n (m) for multiply\n";
    char button;
    cin>>button;
    switch (button)
    {
    case 'a':
        cout<<"the sum is "<<(a+b);
        break;
    case 's':
        cout<<"the difference is "<<(a-b);
        break;
    case 'm':
        cout<<"the product is "<<(a*b);
        break;
    case 'd':
        cout<<"the quotient of a/b is "<<(a/b);
        break;

    default:
        break;
    }
    return 0;

}