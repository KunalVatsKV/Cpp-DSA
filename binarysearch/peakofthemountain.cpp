#include<iostream>
using namespace std;

int binarysearch(int arr[],int size){

    int start=0;
    int end=size-1;
    
    
    while(start<=end){

        int mid= (start + (end-start)/2);
    
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        if(arr[mid]>arr[mid+1]){
            end=mid;
        }
        else{
            return end;     
        }
    }return -1;
}

int main(){
      
      int arr[]={0,2,1,0};

      
      int size=(sizeof(arr)/sizeof(arr[1]));

      int x=binarysearch(arr,size);
      cout<<x;
      
    
}