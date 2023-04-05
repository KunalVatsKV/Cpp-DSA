#include<iostream>
using namespace std;

void selectionsort(int arr[],int size){
    
    for(int i=0;i<(size-1);i++){
        int minindex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
           
        } swap(arr[i],arr[minindex]);

    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
     
    int arr[]={2,5,3,6,3,4,7,8,9};
    
    int size=sizeof(arr)/sizeof(arr[0]);
    
    selectionsort(arr,size);
    
}