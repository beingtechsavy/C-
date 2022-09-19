#include <iostream>
using namespace std;

int main(){

    int c,n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-(n-i);j++){

            c=i+j;
            if (c%2==0){
                cout<<" 1 ";
            }
            else if (c%2!=0)
            {
                cout<<" 0 ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}