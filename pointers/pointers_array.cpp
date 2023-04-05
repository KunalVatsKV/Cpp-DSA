#include<iostream>
using namespace std;

int main(){

    for(int i=0;i<=2;i++){
        cout<<""<<endl;           //for printing gap
    }


 
    int arr[10]={1,7,3,4,5,6};


    cout<<"address of array is: "<<arr+1<<endl;

    cout<<"address using pointers: "<<&arr[0]<<endl;

    cout<<"print value using * = "<<*arr+1<<endl;
    
    cout<<"print value using * = "<<*(arr+1)<<endl;
    
    // * indicates value at a given address
    // & indicates address of an element

    // arr[i] == i[arr] both mean the same thing

    //implementation of cout is different in the case of cHAR ARRAYS

    // for eg->
    for(int i=0;i<=2;i++){
        cout<<""<<endl;           //for printing gap
    }

    

    char ch[5] = "abcd";

    char *c= &ch[0];

    cout<<&ch<<endl;
    cout<<ch<<endl;
    cout<<c<<endl;
    cout<<&ch[0]<<endl;

    

    return 0;


} 