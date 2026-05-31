// Variation 4 — Recursive Smallest Element Traversal
#include <stdio.h>
#include <stdlib.h>

int input(int *arr, int n);
int smallest(int *arr, int n);

int input(int *arr, int n)
{
    for (int *ptr = arr; ptr < arr + n; ptr++)
    {
        if (scanf("%d", ptr) != 1)
        {
            return 1;
        }
    }
    return 0;
}

int smallest(int *arr, int n)
{
    if (n == 1)
    {
        return arr[0];
    }

    int iRet = smallest(arr + 1, n - 1);

    if (arr[0] < iRet) // compare current element against minimum of remaining subarray
    {
        return arr[0];
    }

    return iRet;
}

int main()
{
}