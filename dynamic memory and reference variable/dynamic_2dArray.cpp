#include<iostream>
using namespace std;


int main(){
   
   int n;
   
   cout<<"Enter the number of rows: "<<endl;
   cin>>n;

   int m;
   
   cout<<"Enter the number of columns: "<<endl;
   cin>>m;

  
   int** arr = new int*[n];   //dynamic 2d array

    for(int i=0;i<n;i++){
        arr[i] = new int[m];
    }
    
    //creation done 
    
    cout<<"Enter the elements: "<<endl;

    for(int i=0;i<n;i++){ 
        for(int j=0;j<m;j++){
           cin>>arr[i][j];
        }
    }

    // value inserted
    cout<<endl;

    for(int i=0;i<n;i++){ 
        for(int j=0;j<m;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //for output
    

    // now for relaesing memory 

    for(int i=0;i<n;i++){
        delete [] arr[m];
    }

    delete []arr;



    return 0;


}