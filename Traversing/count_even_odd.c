// Code to count total evens and total odds in array:

#include <stdio.h>
void count_even_odd(int arr[], int n);

int main()
{
    int arr[10] = {2, 1, 4, 6, 7, 10, 13, 19, 55, 74};
    int n = sizeof(arr) / sizeof(arr[0]);

    count_even_odd(arr, n);

    return 0;
}

void count_even_odd(int arr[], int n)
{
    int evens = 0;
    int odds = 0;
    int i = 0;

    while (i < n)
    {
        if (arr[i] % 2 == 0)
            evens = evens + 1;
        else
            odds = odds + 1;

        i++;
    }
    printf("\nTotal Even = %d\tTotal Odd = %d", evens, odds);

    return;
}