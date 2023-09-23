//Code to inssert a char item in Kth position into a linear array of char:
#include <stdio.h>
#include <string.h>

void print_array(char a[], int n);
void insert_char(char a[], int n, int k, char item);

void main()
{
    char name[] = {'P', 'O', 'P', 'L', 'E'};
    int n = sizeof(name) / sizeof(name[0]);
    int pos = 2;
    char item = 'E';

    print_array(name, n);
    insert_char(name, n, pos, item);

    return;
}

void insert_char(char a[], int n, int k, char item)
{
    k = k - 1;
    int j = n;
    while (j >= k)
    {
        j--;
        a[j + 1] = a[j];
    }
    a[k] = item;
    n = n + 1;

    printf("\nItem '%c' successfully inserted.", item);
    print_array(a, n);

    return;
}

void print_array(char a[], int n)
{
    printf("\nArray[%d] = ", n);
    for (int i = 0; i < n; i++)
    {
        printf("%c\t", a[i]);
    }
    return;
}