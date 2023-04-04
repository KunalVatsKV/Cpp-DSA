#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout<<"no. of rows: ";
    cin>>rows;

    int** arr=new int*[rows];
    int* sizes=new int[rows];

    //creating a jagged array

    for(int i=0;i<rows;i++)
    {
        cout<<"Enter the size for "<<i+1<<" subarray: ";
        cin>>sizes[i];
        arr[i]=new int[sizes[i]];
    }

    for(int i=0;i<rows;i++)
    {   
        cout<<"Enter the elements for "<<i+1<<" subarray: ";

        for(int j=0;j<sizes[i];j++)
        {   
            
            cin>>arr[i][j];
        }
    }
    // printing jagged array

    for(int i=0; i<rows;i++)
    {
        for(int j=0;j<sizes[i];j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}