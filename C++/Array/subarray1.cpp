#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int cur=0;
    for(int i=0;i<n;i++){
        cur=0;
        for(int j=i;j<n;j++){
            cur+=arr[j];
            cout<<cur<<endl;
        }
    }
}