#include<iostream>
using namespace std;

int binarysearch(int arr[],int x,int size){

    int start=0;
    int end=size-1;
    
    int mid= (start + (end-start)/2);


    while(start<=end){

        if(arr[mid]==x){
            return mid;
        }
        if(x>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        } mid=(start+end)/2;
    }

   return 0;
}

int main(){
      
      int arr[]={1,5,7,12,13,14,15};

      int x;
      cout<<"Enter the element you want to search:"<<endl;
      cin>>x;
      int size=(sizeof(arr)/sizeof(arr[1]));

      int ans=binarysearch(arr,x,size);
      
      if(ans==0){
          cout<<"ELement not found"<<endl;
      }else{
        cout<<"Element found at index: "<<ans;
      }
      return 0;

}