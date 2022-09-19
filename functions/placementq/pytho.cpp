#include <iostream>
#include <math.h>
using namespace std;
int max(int a,int b,int c){
    int max;
    if (a>b && a>c){
        max=a;
    }
    else if(a<b && b>c){
        max=b;
    }
    else{
        max=c;
    }
    return max;
}
int main(){
    int a ,b,c;
    cin>>a>>b>>c;
    cout<<max(a,b,c);
    int maj=max(a,b,c);
    if (maj==a){
        if(pow(maj,2)==pow(c,2)+pow(b,2)){
            cout<<"it is a pythogorean triplet";
        }
        else{
            cout<<"it is not a pytha gorean triplet";
        }
    }
    else if (maj==b){
        if(pow(maj,2)==pow(a,2)+pow(c,2)){
            
            cout<<"it is a pythogorean triplet";
        }
        else{
            cout<<"it is not a pytha gorean triplet";
        }
    }
    else if (maj==c){
        if(pow(maj,2)==pow(a,2)+pow(b,2))
        {
            cout<<"it is a pythogorean triplet";
        }
        else{
            cout<<"it is not a pytha gorean triplet";
        }
    }
    return 0;


}