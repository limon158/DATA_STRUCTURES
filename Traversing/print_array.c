// Code to print an array:
#include <stdio.h>
void print_array(int arr[], int n);

int main()
{
    int arr[10] = {2, -1, 4, 6, -7, 10, 13, 19, 55, 74};
    int n = sizeof(arr) / sizeof(arr[0]);

    print_array(arr, n);

    return 0;
}

void print_array(int arr[], int n)
{
    int i;
    printf("\nArray={\t");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("}");
}