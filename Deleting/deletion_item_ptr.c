// Code to delete a item from array:
#include <stdio.h>
void print_array(int *(a), int *(n));
void delete_item(int *(a), int *(n), int *(k));

int main()
{
    int arr[] = {5, 1, 4, 3, 2, 6};
    int pos = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    print_array(arr, &n);
    delete_item(arr, &n, &pos);
    print_array(arr, &n);
    return 0;
}

void delete_item(int *(a), int *(n), int *(k))
{
    int x = *(a + *(k));
    int j = *(k);
    while (j < *(n))
    {
        *(a + j) = *((a + j) + 1);
        j++;
    }
    *(n) = *(n)-1;
    printf("\nItem %d of index %d deleted sucessfully", x, *(k));
    return;
}

void print_array(int *(a), int *(n))
{
    printf("\nArray[%d] : ", *(n));
    for (int i = 0; i < *(n); i++)
    {
        printf("%d\t", *(a + i));
    }
    return;
}