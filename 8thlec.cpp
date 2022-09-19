// pattern questions 
#include <iostream>
using namespace std ;
int main(){
    int row, colums;
    cout<<"first input row and then colums";
    cin>>row>>colums;
    for (int i = 1; i <=colums; i++)
    {
        /* code */
        for (int j = 1; j <= row; j++)
        {
            /* code */
            cout<<'*';
        }
        cout<<endl;
        
    }
    
    return 0;
}