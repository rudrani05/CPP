// subarray with given sum
#include<iostream>
using namespace std;

int main(){
    int n,s;
    cin>>n>>s;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   int i=0;int j=0;int st=-1;int en=-1;int sum=0;
   while(j<n && sum+arr[j]<=s){
       sum+=arr[j];
       j++;
   }
   if(sum==s){
       cout<<i+1<<" "<<j<<endl;
       return 0;
   }
   while(j<n){
       sum+=arr[j];
       while(sum>s){
           sum-=arr[i];
           i++;
       }
       if(sum==s){
           st=i+1;
           en=j+1;
           break;
       }
       j++;
   }
cout<<st<<" "<<en<<endl;
return 0;

}