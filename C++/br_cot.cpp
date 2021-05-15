#include<iostream>
using namespace std;

int main(){
    int pocmoney=3000;
    for(int date=1;date<=30;date++)
    {
        if(date%2==0){
            continue;
        }
        if(pocmoney==0){
            break;
        }
        cout<<"Go out today!"<<endl;
        pocmoney=pocmoney-300;
    }
    return 0;
}