#include<iostream>
using namespace std;


void getElements(int arr[], int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
   
   int n;
   
   cout<<"Enter the size of array: "<<endl;
   cin>>n;

  
   int* arr = new int[n];   //dynamic array

   cout<<"Enter the elements: "<<endl;

   for(int i=0;i<n;i++){
    cin>>arr[i];
   }

   getElements(arr,n);

    return 0;


}