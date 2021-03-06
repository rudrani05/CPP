#include<iostream>
using namespace std;

struct Pair{
    int min;
    int max;
};

struct Pair getMinMax(int arr[],int n){
   struct Pair minmax;

   if(n==1){
      minmax.min=arr[0];
      minmax.max=arr[0];
   }

   if(arr[0]>arr[1]){
       minmax.max=arr[0];
       minmax.min=arr[1];
   }

   else{
       minmax.max=arr[1];
       minmax.min=arr[0];
   }

   for(int i=0;i<n;i++){
       if(arr[i]>minmax.max){
           minmax.max=arr[i];
       }
       else if(arr[i]<minmax.min){
           minmax.min=arr[i];
       }
   }
   return minmax;
}

int main(){
   int arr[]={1,2,3,4,5,6};
   int n=6;
   struct Pair minmax=getMinMax(arr,n);

   cout<<"Minimum element is"<<" "<<minmax.min<<endl;
   cout<<"Maximum element is"<<" "<<minmax.max<<endl;
   return 0;

}