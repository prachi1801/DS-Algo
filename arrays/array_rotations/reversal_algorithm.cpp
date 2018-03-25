#include<iostream>
using namespace std;

void swap(int * a, int *b)
{
    *a = *a + *b;
    *a = *a - *b;
    *b = *a - *b;
}

void rvereseArray(int arr[], int start, int end)
{
	
	while (start < end)
	{
		swap(arr[start], arr[end]);
		start++;
		end--;
	}
}

void leftRotate(int arr[], int d, int n)
{
	rvereseArray(arr, 0, d-1);
	rvereseArray(arr, d, n-1);
	rvereseArray(arr, 0, n-1);
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
}

/* Driver program to test above functions */
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	int d = 2;
	leftRotate(arr, d, n);
	printArray(arr, n);
	return 0;
}
