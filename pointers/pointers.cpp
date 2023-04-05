#include<iostream>
using namespace std;

int main(){
 
    int a=5;

    int *ptr = &a;

    cout<<ptr<<endl;

    cout<<*ptr<<endl;

    (*ptr)++;     //original value changes with we modify the pointers

    cout<<*ptr<<endl;


    int *q=ptr;  //copying pointer


    cout<<*q<<endl;

    return 0;


}