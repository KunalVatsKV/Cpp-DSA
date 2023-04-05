#include<iostream>
using namespace std;

void insertionsort(int arr[],int size){

    for(int i=1;i<size;i++){  
        int key=arr[i];
        int j=i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j]; //shift
            j=j-1;
            
        }
        arr[j+1]=key;  //putting the key in the right place
        
        

    }
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
     
    int arr[]={2,5,3,6,3,4,7,8,9};

    int size=sizeof(arr)/sizeof(arr[0]);
    
    insertionsort(arr,size);
    
}