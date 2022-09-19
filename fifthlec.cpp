#include <iostream>
using namespace std ;
int main(){
    int pocketmoney=3000;
    for (int date = 1; date <=30; date++)
    {
       if (date%2==0){ 
           continue;
       }
       /* code */
        cout<<"go out today"<<endl;
        pocketmoney-=300;
        if (pocketmoney<= 0)
        {
            /* code */
            break; 
        }
        

    }
    
    return 0;
}