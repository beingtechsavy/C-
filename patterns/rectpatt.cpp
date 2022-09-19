#include <iostream>
using namespace std;
int main(){

    int a ,b;
    cout<<"enter the number of rows \n";
    cin>>a;
    cout<<"enter the number of columns \n";
    cin>>b;
    for (int i=0;i<b;i++){
        for (int j=0;j<a;j++){

            cout<<"*";
        }
        cout<<endl;

    }


    return 0;
}