// Variation 5 — Maximum Element using Function-based Modular Pointer Traversal
#include <stdio.h>

int maximum(int *arr, int n);
void input(int *arr, int n);
void display(int *arr, int n);

void input(int *arr, int n)
{
    for (int *ptr = arr; ptr < arr + n; ptr++)
    {
        scanf("%d", ptr);
    }
}
int maximum(int *arr, int n)
{
    int max = arr[0];
    for (int *ptr = arr + 1; ptr < arr + n; ptr++)
    {
        if (*ptr > max)
        {
            max = *ptr;
        }
    }

    return max;
}
void display(int *arr, int n)
{
    for (int *ptr = arr; ptr < arr + n; ptr++)
    {
        printf("%d ", *ptr);
    }
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid input\n");
        return 0;
    }

    int arr[n];

    printf("Enter elements: ");
    input(arr, n);

    printf("Elements in array: ");
    display(arr, n);

    printf("Maximum = %d\n", maximum(arr, n));

    return 0;
}