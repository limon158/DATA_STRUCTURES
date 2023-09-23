// Code to insert an element in linear array:

#include <stdio.h>

void insert_item(int a[], int *(n), int k, int x);
void print_array(int a[], int n);

int main()
{
    int arr[] = {5, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int item = 6;
    int pos = 2;

    print_array(arr, n);
    insert_item(arr, &n, pos, item);
    print_array(arr, n);

    return 0;
}

void insert_item(int a[], int *(n), int k, int x)
{
    k = k - 1;
    int i = *(n);
    while (i >= k)
    {
        i--;
        a[i + 1] = a[i];
    }
    a[k] = x;
    *(n) = *(n) + 1;

    printf("\nItem %d inserted in position %d", x, k + 1);
    return;
}

void print_array(int a[], int n)
{
    printf("\nArray[%d] = ", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    return;
}