#include <iostream>
using namespace std;

int binarysearch(int arr[], int x, int size)
{

    int start = 0;
    int end = size - 1;

    bool isASC = arr[start] < arr[end]; // checking if the array is in ascending or decending order

    while (start <= end)
    {

        int mid = (start + (end - start) / 2); // middle element

        if (arr[mid] == x)
        {
            return mid;
        }
        if (isASC)
        { // for ascending array
            if (x > arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        else
        { // for decending array
            if (x > arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }

    return -1;
}

int main()
{

    int arr[] = {15, 13, 12, 11, 9, 7, 8};

    int x;
    cout << "Enter the element you want to search:" << endl;
    cin >> x;
    int size = (sizeof(arr) / sizeof(arr[1]));

    int ans = binarysearch(arr, x, size);

    if (ans == -1)
    {
        cout << "ELement not found" << endl;
    }
    else
    {
        cout << "Element found at index: " << ans;
    }
    return 0;
}