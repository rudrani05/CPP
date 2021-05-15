#include<iostream>
using namespace std;

int main(){
    char button;
    cout<<"Input a character: ";
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
     case 'b':
        cout<<"Namaste"<<endl;
        break;
     case 'c':
        cout<<"Hola"<<endl;
        break; 
     case 'd':
        cout<<"Ciao"<<endl;
        break;
     case 'e':
        cout<<"Salute"<<endl;
        break;           
    default:
    cout<<"I am  still learning more!"<<endl;
        break;
    }

    // if(button=='a'){
    //    cout<<"Hello"<<endl;

    //}
    //else if(button=='b'){
    //    cout<<"Namaste"<<endl;
    // }
    //else if(button=='c'){
    //    cout<<"Holla"<<endl;
    // }
    //else{
    //    cout<<"Still learning"<<endl;
    //}
}