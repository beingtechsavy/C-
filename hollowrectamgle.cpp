// program to make hollow rectangle
#include <iostream>
using namespace std ;
int main(){
    int row=5,columns=4;
    for (int i = 1; i <=row; i++)
    {
        /* code */
        for (int j = 1; j <= columns; j++)
        {
            if (i==1 || i==row)
                {
                    cout<<"*";
                }
            else if (j==1 || j==columns )
            {
                /* code */
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    
    return 0;
}