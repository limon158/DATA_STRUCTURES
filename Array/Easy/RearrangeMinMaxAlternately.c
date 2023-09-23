#include <stdio.h>
#include <stdbool.h>
void rearrange(int a[], int n)
{
    int temp[n];
    int p = 0, q = n - 1;
    bool flag = true;
    int i;
    for (i = 0; i < n; i++)
    {
        if (flag)
            temp[i] = a[q--];
        else
            temp[i] = a[p++];

        flag = !flag;
    }
    for (i = 0; i < n; i++)
        a[i] = temp[i];
}
int main()
{
    system("cls");
    int n = 7;
    int array[7] = {2, 3, 4, 5, 6, 8, 10};
    printf("\nbefore rearrange: \n");
    int i;
    for (i = 0; i < n; i++)
        printf("i-%d-> %d \n", i, array[i]);
    rearrange(array, n);
    printf("\nbefore rearrange: \n");
    i = 0;
    for (i = 0; i < n; i++)
        printf("i-%d-> %d \n", i, array[i]);
    system("pause");
    system("cls");
    return 0;
}