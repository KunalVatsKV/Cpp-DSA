#include<iostream>
using namespace std;

void revArray(int arr[],int start,int end){

    while(end>=start){
        int x=arr[start];
        arr[start]=arr[end];
        arr[end]=x;
        start=start+1;
        end=end-1;
    }
}


void printRevArray(int arr[],int size){
    
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
}


int main(){
    int arr[]={-36,7,8,9,-1,7,56,-3,4};
    

    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n;
    revArray(arr,0,n-1);

    cout<<"Reversed array:"<<endl;

    printRevArray(arr,n);

    return 0;
}
