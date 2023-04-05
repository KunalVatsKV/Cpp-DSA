#include<iostream>
using namespace std;

int main(){
 
    int a=5;

    int *ptr = &a;

    int **ptr2 = &ptr;

    cout<<ptr<<endl;

    cout<<&ptr<<endl;

    cout<<*ptr<<endl;

    cout<<ptr2<<endl;

    cout<<*ptr2<<endl;

    cout<<**ptr2<<endl;



    return 0;


}