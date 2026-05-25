// Variation 9 — Function + Pointer Increment Traversal
#include <stdio.h>

void inputArray(int arr[], int n);
void outputArray(int arr[], int n);

void inputArray(int arr[], int n)
{
    printf("Enter elements : ");
    int *ptr = arr;
    while (ptr < arr + n)
    {
        scanf("%d", ptr);
        ptr++;
    }
}

void outputArray(int arr[], int n)
{
    printf("Elements : ");
    int *ptr = arr;
    while (ptr < arr + n)
    {
        printf("%d ", *ptr);
        ptr++;
    }
}

int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid Input\n");
        return 0;
    }

    int arr[n];

    inputArray(arr, n);
    outputArray(arr, n);

    return 0;
}