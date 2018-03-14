#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int max = i;
	int left = 2*i+1;
	int right = 2*i+2;
	
	if(left < n && arr[left] > arr[max])
	{
	    max = left;
	}
	if(right < n && arr[right] > arr[max])
	{
	    max = right;
	}
	
	if(max != i)
	{
	    swap(arr[i], arr[max]);
	    heapify(arr,n, max);
	}
	
}

void heapSort(int arr[], int n)
{
	for(int i = n-1; i >=0; i--)
	{
	    if((i-1)/2 >=0)
	    {
	        heapify(arr,n, i);
	    }
	}
	
	for(int i = n-1; i>0; i--)
	{
	    swap(arr[i], arr[0]);
	    heapify(arr,i,0);
	}
}

void printArray(int arr[], int n)
{
	for (int i=0; i<n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
	int arr[] = {12, 11, 13, 5, 6, 7};
	int n = sizeof(arr)/sizeof(arr[0]);

	heapSort(arr, n);

	cout << "Sorted array is \n";
	printArray(arr, n);
}
