#include <iostream>
#include<math.h>
using namespace std;
int isprime(int k){
    int flas=0;
    for (int i=1;i<sqrt(k);i++){
         if (k%i==0){
            flas+=1;
            return false;
         }

        

    }
    return true;
}


int main(){
    int n1,n2;
    cin>>n1>>n2;
    for (int i=n1;i<n2;i++){
        cout<<isprime(i)<<endl;
    }

    return 0;

}