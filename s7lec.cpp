#include <iostream>
using namespace std ;
int main(){
    int i=1;
    int j=2;
    int k;
    k= i +j + i++ + j++ + ++i + ++j;
    cout<<i<<" "<<j<<" "<<" "<<k<<endl;
    // i= i++ + ++i;
    cout<<i<<endl;
    return 0;
} 
// left shift operator 
// 4<<1
// 4*2^1
// 8
// 1000
// right shift operator 
// 4>>1f
// 4/2^n
// 2
// 0010
// ternary operatos are easier
// int a;
// int b;
// int c=a>b?a-b:b-a;
