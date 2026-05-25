// Variation 10 — Function + Pointer Increment Traversal + for Loop
#include <stdio.h>

void inputArray(int arr[], int n);
void outputArray(int arr[], int n);

void inputArray(int arr[], int n)
{
    printf("Enter elements : ");
    int *ptr = NULL;
    for (ptr = arr; ptr < arr + n; ptr++)
    {
        scanf("%d", ptr);
    }
}
void outputArray(int arr[], int n)
{
    printf("Elements : ");
    int *ptr = NULL;
    for (ptr = arr; ptr < arr + n; ptr++)
    {
        printf("%d ", *ptr);
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