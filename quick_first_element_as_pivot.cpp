#include<iostream>
using namespace std;

void quicksort(int arr[50],int first,int last)
{

	int i, j, pivot, temp;
	if(first<last){
		pivot=first;
		i=first;
		j=last;
		while(i<j){
			while(arr[i]<=arr[pivot]&&i<last)
				i++;

			while(arr[j]>arr[pivot]) 
			if(i<j){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			
		}
		temp=arr[pivot];
		arr[pivot]=arr[j];
		arr[j]=temp;
		quicksort(arr,first,j-1);
		quicksort(arr,j+1,last);
	}
}

int main()
{	
	int i, n, arr[50];
	cout << "Enter number of elements : ";
	cin >> n;
	cout << "\nEnter the elements :\n";
	for(i=0;i<n;i++){
		cin >> arr[i];
	}
	
	cout << "Input array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    
	quicksort(arr,0,n-1);
	cout << "The Sorted Order is: ";
	for(i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	cout << "\n";
	
	cout << "Abhilash" << endl;
	cout << "21BCE10436" << endl;
}