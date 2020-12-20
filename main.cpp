#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void CocktailSort(int a[], int n)
{
    bool swapped = true;
    int start = 0;
    int end = n - 1;

    while (swapped)
    {
        swapped = false;
        for (int i = start; i < end; ++i)
        {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
        swapped = false;
        --end;
        for (int i = end - 1; i >= start; --i)
        {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
                swapped = true;
            }
        }
        ++start;
    }
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main()
{
    int a[] = {3, 33, 23, 14, 35, 16, 23, 54, 12, 34, 22, 19, 9, 6, 4, 3, 2, 44, 24, 21, 32, 15, 64, 24, 18, 29, 38, 20, 10, 40, 10, 21, 56, 65, 42, 35, 27, 28, 38, 49};
    int n = sizeof(a) / sizeof(a[0]);
    CocktailSort(a, n);
    printf("Sorted array :\n");
    printArray(a, n);
    return 0;
}
