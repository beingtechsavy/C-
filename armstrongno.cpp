#include <iostream>
#include <cmath>
using namespace std ;
int main(){
     int n,sum=0;
    cin>>n;
    int orin=n;
    while (n>0)
    {
        int lastdigit=n%10;
        sum+= pow(lastdigit,3);
        n/=10;
    }
    cout<<sum;
    if (sum==orin)
    {
        cout<<"it is  a armstrong no.";
   }
    else
    {
        cout<<"it is not a armstrong no.";
    }
    return 0;
}