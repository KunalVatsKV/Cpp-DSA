#include<iostream>
using namespace std;

//using recursion
//almost opposite of merge sort
//take an element and put it at it's right place

int partition(int * arr,int s,int e){

    int pivot = arr[s];

    int count =0;

    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;             //finding the currect position of pivot
        }
    }

    //placing the pivot at it's correct postion 

    int pivotIndex = s+count;

    swap(arr[s],arr[pivotIndex]);

    //not placing elements smaller than pivot on it's left and the bigger elements on it's right.

    int i=s;
    int j=e;

    while(i<pivotIndex && j> pivotIndex){

        while(arr[i]<=pivot){
            i++;
        }

        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotIndex && j > pivotIndex){
            swap(arr[i++],arr[j--]);
        }

    }

    return pivotIndex;


}
void quickSort(int* arr,int s,int e){

    if(s>=e){
        return ;
    }

    //getting the pivot index

    int p=partition(arr,s,e);

    //sorting  the left array

    quickSort(arr,s,p-1);

    //sorting the right array

    quickSort(arr,p+1,e);

  
}

int main(){
     
    int arr[10]={2,5,3,6,3,5,7,8,9,1};
    
    quickSort(arr,0,9);
    
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}