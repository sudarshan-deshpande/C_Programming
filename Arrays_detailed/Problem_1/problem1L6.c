// Variation 6 — Function + While Loop Traversal

#include <stdio.h>

void inputArray(int arr[], int n);
void outputArray(int arr[], int n);

void inputArray(int arr[], int n)
{
    printf("Enter elements :");

    int i = 0;
    while (i < n)
    {
        scanf("%d", &arr[i]);
        i++;
    }
}

void outputArray(int arr[], int n)
{
    printf("Elements : ");

    int i = 0;
    while (i < n)
    {
        printf("%d ", arr[i]);
        i++;
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
