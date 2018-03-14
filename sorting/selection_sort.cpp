#include <iostream>

using namespace std;

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}

void selectionSort(int arr[],int n)
{
    int mi;
    for(int i = 0; i < n-1; i++)
    {
        mi = i;
        for(int j = i; j < n; j++)
        {
            if(arr[j] < arr[mi])
            {
                mi = j;
            }
        }
        swap(&arr[i] , &arr[mi]);
    }
}

void swap(int * a, int * b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

