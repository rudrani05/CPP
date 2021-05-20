#include<iostream>
using namespace std;

struct Pair
{
  int max;
  int min;
};

struct Pair getMinMax(int arr[],int low,int high){
    struct Pair minmax , mml ,mmr;
    int mid;

    if(low==high){
        minmax.min=arr[low];
        minmax.max=arr[low];
        return minmax;
    }
    
    if(high==low+1){
        if(arr[low]>arr[high]){
            minmax.max=arr[low];
            minmax.min=arr[high];
        }
        else{
            minmax.max=arr[high];
            minmax.min=arr[low];
        }return minmax;
    }

    mid=(low+high)/2;
    mml=getMinMax(arr,low,mid);
    mmr=getMinMax(arr,mid+1,high);

    if(mml.min<mmr.min)
        minmax.min=mml.min;
    
    else
        minmax.min=mmr.min;
    

    if(mml.max>mmr.max)
        minmax.max=mml.max;
    
    else
        minmax.max=mmr.max;
    
    return minmax;

}

int main(){
    int arr[]={122,787,90,1,34,342};
    int n=6;
    struct Pair minmax=getMinMax(arr,0,n-1);
    cout<<"Maximum element"<<" "<<minmax.max<<endl;
    cout<<"Minmum element"<<" "<<minmax.min<<endl;
    return 0;
}