#include<iostream>
using namespace std;

//using recursion

bool binarysearch(int* arr,int x,int start,int end){

    
    if(start>end){
        return false;  //base case
    }

    int mid= (start + (end-start)/2);

    if(arr[mid]==x){
        return true;  //base case
    }

    if(x>arr[mid]){
        return binarysearch(arr,x,mid+1,end);
    }
    
    else{
        return binarysearch(arr,x,start,mid-1);
    }
    
}

int main(){
      
      int arr[]={1,5,7,12,13,14,15};

      int x;
      cout<<"Enter the element you want to search:"<<endl;
      cin>>x;

      int size=(sizeof(arr)/sizeof(arr[1]));

      int ans=binarysearch(arr,x,0,size-1);
      
      if(ans){
          cout<<"ELement is Present"<<endl;
      }else{
        cout<<"Element not present"<<endl;
      }

      return 0;

}