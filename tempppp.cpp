#include<iostream>
using namespace std;

void print(int *arr ,int n){

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }

   
}

int main(){
    
   int arr[5]={1,4,6,7,8};
   
   print(arr+2,3);

   return 0;


}