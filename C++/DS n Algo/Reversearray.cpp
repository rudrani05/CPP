#include<iostream>
using namespace std;

void reverse(int arr[],int start,int end){

    while(start<end){
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]= temp;
    start++;
    end--;
    }

}

void printarry(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }

}

int main(){
    int arr[]={1,2,3,4,5,6};

    int n=sizeof(arr)/sizeof(arr[0]);

    printarry(arr,n);

    reverse(arr,0,n-1);

    cout<<"Print reverse array"<<endl;

    printarry(arr,n);

    return 0;
}