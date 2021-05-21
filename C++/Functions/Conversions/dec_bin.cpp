#include<iostream>
using namespace std;

int decimalTobinary(int n){
    int ans=0;
    int ans1=0;
    while(n>0){
        int x=n%2;
        ans=ans*10+x;
        n=n/2;
    }
    while(ans>0){
       int y=ans%10;
       ans1=ans1*10+y;
       ans=ans/10;
    }
    return ans1;
}

int main(){
    int n;
    cin>>n;
    cout<<decimalTobinary(n)<<endl;
}