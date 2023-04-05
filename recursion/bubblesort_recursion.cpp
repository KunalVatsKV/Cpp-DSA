#include<iostream>
using namespace std;

void bubblesort(int* arr,int size){

    if(size==0 || size ==1){
        return ;                        //base case
    }

    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){   
          swap(arr[i],arr[i+1]);       //recurssive case  --- keeps the largest element at the end.
        }
    }

    bubblesort(arr,size-1);
   
}

int main(){
     
    int arr[5]={2,5,3,6,3};
    
    bubblesort(arr,5);
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}