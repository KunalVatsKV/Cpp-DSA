#include<iostream>
using namespace std;


//using recurrsion

//this is a head recurrsion (recursive relation is above processing)
//because the processing part is at the end of the program and recursive relation part is above it


int factorial(int n){

    // base case - it is the stopping point of the function, without the base case the program gives segmentation error
    if(n==0){
        return 1;  //this is the base case for this program
    }

    // int smallerProblem = factorial(n-1);

    // int biggerProblem = n*smallerProblem;

    return n * factorial(n-1);
   
}

int main(){

    cout<<"Enter a number: "<<endl;
    
    int n;
    cin>>n;

    int ans = factorial(n);

    cout<<"Factorial of the number is: "<<ans<<endl;
   

    return 0;


}