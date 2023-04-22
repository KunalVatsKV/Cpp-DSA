
#include <iostream>
using namespace std;


void cycleSort(int arr[], int n)
{   
    int i=0;
    while(i<n){
        if(arr[i]==i+1){
            i++;
        }else{
            swap(arr[i],arr[arr[i]-1]);
        }

    }

}


int main()
{
	int arr[] = {3,5,2,1,4};
	int n = sizeof(arr) / sizeof(arr[0]);

	cycleSort(arr, n);

	cout << "After sort : " << endl;
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}
