// Lumotos Partition Scheme:
#include <iostream>
#include <stdlib.h>
using namespace std;

class SegregateEvenOdd
{
public:
    void evenOdd(int a[], int n)
    {
        int i = -1, j = 0;
        while (j != n)
        {
            if (a[j] % 2 == 0)
            {
                i++;
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            j++;
        }
        for (int k = 0; k < n; k++)
            cout << a[k] << " ";
            cout << endl;
    }
};

int main()
{
    int arr[] = {7, 2, 9, 4, 6, 1, 3, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    SegregateEvenOdd list;
    list.evenOdd(arr, n); 
    system("pause");
    system("cls");
}