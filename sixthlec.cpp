#include <iostream>
using namespace std ;
// int main(){
//     char button;
//     cout<<"input a charachter";
//     cin>>button;
//     if (button=='a'){
//         cout<<"hello"<<endl;
//     }
//     else if (button=='b'){
//         cout<<"salut"<<endl;
//     }
//     else if (button=='c')
//     {
//         cout<<"ciao";
//     }
//     else{
//         cout<<"I AM LEARNING MORE";
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std 
int main(){
    char button;
    cin>>button;
    switch (button)
    {
    case 'a':
        /* code */
        cout<<"hello\n";

        break;
        case 'b':
        /* code */
        cout<<"ciao\n";
        break;
        case 'c':
        /* code */
        cout<<"bonjour\n";
        break;
    default:
        cout<<"I AM STILL LEARNING MORE";
        break;
    }
    return 0;
}