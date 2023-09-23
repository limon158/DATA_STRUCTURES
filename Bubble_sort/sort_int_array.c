
// Code to sort a array of int in assending order by using bubble sort.
#include <stdio.h>
#include <conio.h>
void bubble_sort(int a[], int n); //Sorting function declaration:

int main()
{
    int n;
    printf("\nEnter number of intiger :");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter intigers:");
    int i = 0;
    while (i < n)
    {
        printf("\nint[%d] :", i);
        scanf("%d", &arr[i]);
        i++;
    }
    //bubble_sort() function call:
    bubble_sort(arr, n);

    printf("\nSorted intigers: ");
    int j = 0;
    while (j < n)
    {
        printf("%d\t", arr[j]);
        j++;
    }
    getch();
    return 0;
}
//Sorting function defination:
void bubble_sort(int a[], int n)
{
    int k;
    int temp;
    for (k = 0; k < n - 1; k++)
    {
        int ptr = 0;
        while (ptr < n - k - 1)
        {
            if (a[ptr] > a[ptr + 1])
            {
                temp = a[ptr];
                a[ptr] = a[ptr + 1];
                a[ptr + 1] = temp;
            }
            ptr++;
        }
    }
    return;
}
