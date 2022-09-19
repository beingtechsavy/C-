#include <iostream>
using namespace std ;
int main(){
    int n;
    cin>>n;
    int reevrse=0;
    while (n>0)
    {
        /* code */
        int lastdigit=n%10;
        reevrse=reevrse*10+lastdigit;
        n=n/10;
    }
    cout<<reevrse<<endl;
    return 0;
}