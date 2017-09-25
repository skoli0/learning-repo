// Iterative C program to reverse an array
#include<stdio.h>

/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int size)
{
    int temp;
    int start = 0;
    int end = size - 1;
    
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

/* Utility that prints out an array on a line */
void printArray(int arr[], int size)
{
  int i;
  for (i=0; i < size; i++)
    printf("%d ", arr[i]);

  printf("\n");
}

/* Driver function to test above functions */
int main()
{
    int arr[] = {1, 2, 3};
    printArray(arr, 3);
    rvereseArray(arr, 3);
    printf("Reversed array is\n");
    printArray(arr, 3);
    return 0;
}
