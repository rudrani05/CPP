#include<iostream>
using namespace std;

void fin(int num){
    int t1=0;
    int t2=1;
    int nexTerm;
     for(int i=1;i<=num;i++){
         cout<<t1<<endl;
         nexTerm=t1+t2;
         t1=t2;
         t2=nexTerm;

     }
     return;
}

int main(){
   int n;
   cin>>n;
   fin(n); 
   return 0;
}