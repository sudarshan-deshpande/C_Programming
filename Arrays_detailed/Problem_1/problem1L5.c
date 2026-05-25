// Variation 5 - Function Based Array Handling

#include <stdio.h>
void inputArray(int arr[], int n);
void outputArray(int arr[], int n);

void inputArray(int arr[], int n)
{
    printf("Enter elements :");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void outputArray(int arr[], int n)
{
    printf("Elements are :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n;
    printf("Enter number of elements :");
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