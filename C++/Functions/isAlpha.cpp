#include<iostream>
using namespace std;

bool isAlpha(char s){
    if((s>=65 && s<=90) || (s>=97 && s<=122)){
        return true;
    }
    return false;
}

int main(){
    char a;
    cin>>a;
     
    if(isAlpha(a)){
        cout<<"Alphabet"<<endl;
    }
    else{
        cout<<"Not an alphabet"<<endl;
    }
    return 0;
}