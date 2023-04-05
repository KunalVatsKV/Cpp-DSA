#include<iostream>
using namespace std;


void merge(int *arr,int s,int e){

    int mid = s + (e-s)/2;

    int len1 = mid - s + 1;  //length of the left array
    int len2 = e - mid;       //length of the right array
  
    int *first = new int[len1];
    int *second = new int[len2];

    //putting values in the left array
    int mainArrayIndex=s; //index of the combined array
    
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];
    }

    //putting values in the right array

    mainArrayIndex=mid+1;

    for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayIndex++];
    }

    //now merging both the arrays
    //same code AS THE CODE FOR "merge 2 sorted arrays  (LEETCODE - 88)"

    mainArrayIndex=s;
   
    int i=0;
    int j=0;
    
    while(i<len1 && j<len2){
        if(first[i]<second[j]){
            arr[mainArrayIndex++]=first[i++];
        }else{
            arr[mainArrayIndex++]=second[j++];
        }
    }

    while(i<len1){
        arr[mainArrayIndex++]=first[i++];
    }

    while(j<len2){
        arr[mainArrayIndex++]=second[j++];
    }


}

void mergeSort(int* arr,int s,int e){

    if(s>=e){
        return ;   //base case
    }

    int mid = s +(e-s)/2;

    //sort the left half of the array
    mergeSort(arr,0,mid);

    //sort the right half of the array

    mergeSort(arr,mid+1,e);

    //merging both the parts

    merge(arr,s,e);
}

int main(){
     
    int arr[5]={2,5,3,6,3};
    
    mergeSort(arr,0,4);
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
    
}