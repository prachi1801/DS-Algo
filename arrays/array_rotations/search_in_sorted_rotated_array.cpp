#include<iostream>

using namespace std;

int search(int arr[], int l, int h, int key)
{
	if (l > h) return -1;

	int mid = (l+h)/2;
	if (arr[mid] == key) return mid;

	if ((arr[mid] > arr[mid-1] && arr[mid] > arr[mid + 1]) || (arr[mid] < arr[mid-1] && arr[mid] < arr[mid+1]))
	{
	   if (arr[l] <= key)
	   {
	       return search(arr, l , mid-1, key);
	   }
	   else{
	       return search(arr, mid+1, h, key);
	   }
	}

	if(arr[l] <= key && arr[mid] > key)
	{
	    return search(arr, l, mid-1, key);
	}
	else{
	    return search(arr, mid+1, h, key);
	}
}

int main()
{
	int arr[] = {4, 5, 6, 7, 8, 9, 1, 2, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key = 2;
	int i = search(arr, 0, n-1, key);
	if (i != -1) cout << "Index: " << i << endl;
	else cout << "Key not found";
}
