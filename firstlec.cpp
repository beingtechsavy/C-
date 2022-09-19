#include <iostream>
using namespace std;
int main() {
    int a;
    a=12;
    cout<<"the size of int is "<<sizeof(a)<<endl;
    float b;
    b=45.6;
    cout<<"the size of float"<<sizeof(b)<<endl;
    char c;
    c='a';
    cout<<"the size of char"<<sizeof(c)<<endl;
    bool g;
    g=true;
    cout<<"the size of bool is "<<sizeof(g)<<endl;
    short int si;
    long int li;
    cout<<"size of short int"<<sizeof(si)<<endl;
    cout<<"the size of long int"<<sizeof(li)<<endl;

    return 0;
}