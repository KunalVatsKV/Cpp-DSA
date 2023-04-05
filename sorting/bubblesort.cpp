#include<iostream>
using namespace std;

void bubblesort(int arr[],int size){

    bool swapped=false;
    
    for(int i=1;i<size;i++){  //we can also use for(int i=0;i<(size-1);i++)
        for(int j=0;j<size-i;j++){ //for that case we will have to write (int j=0;j<(size-1-i);j++)
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
           
        }if(swapped==false){
            cout<<"already sorted"<<endl;
            break;
        }

    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}

int main(){
     
    int arr[]={2,5,3,6,3,4,7,8,9};
    int arr1[]={1,2,3,4,5,6,7,8,9};


    
    int size=sizeof(arr)/sizeof(arr[0]);
    
    bubblesort(arr,size);
    bubblesort(arr1,size);
    
}