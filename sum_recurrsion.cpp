#include<iostream>
using namespace std;


//using recurrsion


int sum(int *arr,int size){

   if(size==0){
     return 0;
   }
   if(size==1){
    return arr[0];
   }
   

   return arr[0]+sum(arr+1,size-1);
   
   
   
}

int main(){

    int arr[5]={1};

    int ans=sum(arr,5);

    cout<<"Sum is: "<<ans<<endl;
   
    return 0;


}