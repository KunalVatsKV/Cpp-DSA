#include<iostream>
using namespace std;

int binarysearch(int arr[],int x,int size){

    int start=0;
    int end=size-1;
    

    while(start<=end){

        int mid= (start + (end-start)/2);

        if(arr[mid]==x){
            return arr[mid];
        }
        if(x>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        } 
    }

   return arr[end];
}

int main(){
      
      int arr[]={1,5,7,12,13,14,15,18,25,26,32,35};

      int x;
      cout<<"Enter the element you want the floor for:"<<endl;
      cin>>x;
      int size=(sizeof(arr)/sizeof(arr[1]));

      int ans=binarysearch(arr,x,size);
      
      cout<<"The floor for the number is: "<<ans;
     
      return 0;

}