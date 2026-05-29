/*
Problem 4 — Find max Element in Array

Objective:
Write a C program to:
- Accept n elements from the user
- Store them in an integer array
- Find the max element using array traversal
- Display the maximum value

Constraints:
1 <= n <= 100

If size is invalid:
Print "Invalid input"
*/

#include <stdio.h>

int maximum(int arr[], int n);
int maximum(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
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

    printf("Enter elements: ");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Maximum = %d\n", maximum(arr, n));

    return 0;
}