#include<iostream>
using namespace std;

void revAltArray(int arr[],int size){

    for(int i=0;i<size-1;){
        swap(arr[i],arr[i+1]);
        i=i+2;
    }
}


void printAltRevArray(int arr[],int size){
    
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
}


int main(){
    int arr[]={-36,7,8,9,2};

    int n=sizeof(arr)/sizeof(arr[0]);  //gives 4 as the size i.e 16/4 because 1 block=4 bytes
    revAltArray(arr,n);
    //cout<<n<<endl;
    cout<<"Reversed array:"<<endl;

    printAltRevArray(arr,n);

    return 0;
}
