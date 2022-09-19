#include <iostream>
#include <cmath>
using namespace std ;

int main(){
    int n,count,limit,sum;
    sum=0;
    cout<<"enter till which number you want"<<endl;
    cin>>limit;
    for (int n = 2; n < limit; n++)
    {
        /* code */
        count=0;
        for (int i = 2; i <=sqrt(n); i++)
        {
            if (n%i==0)
            {
                count+=1;
            }
            else{
                continue;
            }
        }
        if (count==0)
        {
            cout<<"this is a prime no.      "<<n<<endl;
            sum+=n;
        }
        else{ 
            continue;
        }
    }
    cout<<sum;
    return 0;
}