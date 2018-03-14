#include <iostream>
#include <string.h>

#define RANGE 255

using namespace std;

void countSort(char arr[])
{
	int count[RANGE + 1];
	int n = strlen(arr);
	char output[n];
	memset(count, 0, sizeof(count));
	for (int i = 0; i < n; i++)
	{
	    ++count[arr[i]];
	}
	
	for(int i = 1; i <= RANGE; i++)
	{
	    count[i] = count[i-1] + count[i];
	}
	
	for(int i = 0; i < n; i++)
	{
	    output[count[arr[i]]--] = arr[i];
	}
	
	for (int i = 0; i < n; i++)
	{
	    arr[i] = output[i];
	}
}

// Driver program to test above function
int main()
{
	char arr[] = "geeksforgeeks";//"applepp";

	countSort(arr);

	printf("Sorted character array is %sn", arr);
	return 0;
}
