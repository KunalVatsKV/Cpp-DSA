#include<iostream>
#include<math.h>
using namespace std;


int main(){
    cout<<"enter the first number:"<<endl;
    int a;
    cin>>a;
    cout<<"enter the second number:"<<endl;
    int b;
    cin>>b;
    cout<<"enter the operation:"<<endl;
    char op;
    cin>>op;
    switch(op){
        case '+':cout<<"addtion of numbers is:"<<a+b<<endl;
                break;
        case '-':cout<<"substraction of numbers is:"<<a-b<<endl;
                break;
        case '*':cout<<"product of numbers is:"<<a*b<<endl;
                break;
        case '/':cout<<"divison of numbers is:"<<a/b<<endl;
                break;
        default:cout<<"invalid operation."<<endl;
    }
}