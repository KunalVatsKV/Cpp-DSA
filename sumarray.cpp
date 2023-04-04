#include<iostream>
using namespace std;

int sumArray(int sum[],int size){
    int total=0;

    for(int i=0;i<size;i++){
        total=total+sum[i];

    }return total;


}

int main(){
    int size;
    cout<<"Enter the number of elements in the array:"<<endl;
    cin>>size;

    int sum[100];
    cout<<"Enter the values:"<<endl;
    
    for(int i=0;i<size;i++){
        cin>>sum[i];}

    int x=sumArray(sum,size);
    cout<<"The sum of all the elements in the array is: "<<x<<endl;


    return 0;
}
