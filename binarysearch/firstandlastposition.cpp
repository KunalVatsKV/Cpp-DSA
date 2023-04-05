#include<iostream>
using namespace std;

int firstposition(int arr[],int x,int size){

    int start=0;
    int end=size-1;
    int ans=-1;
    

    while(start<=end){

        int mid= (start + (end-start)/2);

        if(arr[mid]==x){
            ans=mid;
            end=end-1;
           
        }
        if(x>arr[mid]){
            start=mid+1;
        }
        else if(x<arr[mid]){
            end=mid-1;
        }
    }return ans;
   
}
int lastposition(int arr[],int x,int size){

    int start=0;
    int end=size-1;
    int ans=-1;
    

    while(start<=end){

        int mid= (start + (end-start)/2);

        if(arr[mid]==x){
            ans=mid;
            start=mid+1;
           
        }
        if(x>arr[mid]){
            start=mid+1;
        }
        else if(x<arr[mid]){
            end=mid-1;
        }
    }return ans;
}

int main(){
      
      int arr[]={1,5,7,7,7,12,13};

      int x;
      cout<<"Enter the element you want to find:"<<endl;
      cin>>x;
      int size=(sizeof(arr)/sizeof(arr[1]));
      
      cout<<"First index of "<<x<<": "<<firstposition(arr,x,size)<<endl;;
      cout<<"Last index of "<<x<<": "<<lastposition(arr,x,size)<<endl;
     
      return 0;

}