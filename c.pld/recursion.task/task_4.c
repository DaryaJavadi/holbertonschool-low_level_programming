#include <stdio.h>
int findMax(int *arr, int size)
{
    int max = *arr;
    for (int *ptr = arr; ptr < arr + size; ptr++)
    {
        if (*ptr > max)
        {
            max = *ptr;
        }
    }
    return (max);
}
int findMin(int *arr, int size)
{
    int min = *arr;
    for (int *ptr = arr; ptr < arr + size; ptr++)
    {
        if (*ptr < min)
        {
            min = *ptr;
        }
    }
    return (min);
}
int main() {
    int arr[] = {7, 23, 7, 12, 76, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = findMax(arr, size);
    int min = findMin(arr, size);
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
    return (0);
}
