#include <iostream>

using namespace std;

int binary_search(int a[], int first, int last, int num)
{
if (last >= first)
{
    int mid = (first + last) / 2;

    if(a[mid] == num)
    {
        return mid;
    }
    else if(num > a[mid])
    {
        return binary_search(a, mid+1, last, num);
    }
    else
    {
        return binary_search(a, 0, mid-1, num);
    }

}

return -1;
}

int main(void)
{
int arr[] = {2, 3, 4, 10, 40};
int n = sizeof(arr)/ sizeof(arr[0]);
int x = 10;
int result = binary_search(arr, 0, n-1, x);
(result == -1)? printf("Element is not present in array")
				: printf("Element is present at index %d",
												result);
return 0;
}
