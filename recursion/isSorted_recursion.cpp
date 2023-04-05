#include<iostream>
using namespace std;


//using recurrsion


bool isSorted(int *arr,int size){

   if(size == 0 || size == 1){
      return true ;  //base case
   }

   if(arr[0]>arr[1]){
    return false;
   }
   else{
     bool ans = isSorted(arr+1,size-1);
     return ans;
   }

   
}

int main(){

    int arr[5]={1,7,3,4,5};

    bool ans=isSorted(arr,5);

    if(ans){
        cout<<"Array is sorted."<<endl;
    }else{
        cout<<"Array is NOT sorted."<<endl;
    }
   
    return 0;


}