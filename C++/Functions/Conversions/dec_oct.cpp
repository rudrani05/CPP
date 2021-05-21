#include<iostream>
using namespace std;


int decimalTOoctal(int n){
     int ans=0;
     int ans1=0;
     while(n>0){
         int x=n%8;
         ans=ans*10+x;
         n=n/8;
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

    cout<<decimalTOoctal(n)<<endl;

    return 0;
}