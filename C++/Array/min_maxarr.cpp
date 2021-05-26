#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int Min_no=arr[0];
    int Max_no=arr[1];

    for(int i=0;i<n;i++){
        Max_no=max(Max_no,arr[i]);
        Min_no=min(Min_no,arr[i]);
        
    }
    cout<<"Maximum number"<<" "<<Max_no<<endl;
    cout<<"Minimum number"<<" "<<Min_no<<endl;
    return 0;
}