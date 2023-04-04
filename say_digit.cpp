#include<iostream>
using namespace std;


//using recurrsion


void sayDigit(string arr[],int n){

   if(n==0){
      return ;  //base case
   }

   int digit=n%10;

   n=n/10;

   sayDigit(arr,n);

   cout<<arr[digit]<<" ";

   
}

int main(){

    cout<<"Enter the number: "<<endl;

    int n;
    cin>>n;

    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

    if(n==0){
        cout<<"zero";
    }else{
        sayDigit(arr,n);
    }
   
    return 0;


}