#include <iostream>
using namespace std;
int main(){

    cout<<"HELLO THERE \n Please enter your letter";
    char letter;
    cin>> letter;
    char arr;
    switch(letter){
        case ('a'):
            cout<<"fuck off";
            break;
        default:
            cout<<"not a vowel";
    }

    return 0;
}