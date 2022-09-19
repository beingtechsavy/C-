#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    int max,min;
    max=0;
    min=array[1];
    for (int i=0;i<n;i++){
        cin>>array[i];
    }
    for (int i=0;i<n;i++){
        if (array[i]>max){
            max=array[i];
        }
    }
    for (int i=0;i<n;i++){
        if (array[i]<min){
            min=array[i];
        }
    }
    cout<<max<<endl;
    cout<<min<<endl;
    // we can also use climits file here;

    return 0 ;
}