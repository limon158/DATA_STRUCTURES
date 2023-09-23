#include <bits/stdc++.h>
using namespace std;
void rotation(int a[], int n, int d);
void reverse(int a[], int s, int e);
void printArray(int a[], int n);
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(array) / sizeof(array[0]);
    int d = 2;

    rotation(array, n, d);
    printArray(array, n);
}
void rotation(int a[], int n, int d)
{
    if (d == 0)
        return;
    reverse(a, 0, d - 1);
    reverse(a, d, n - 1);
    reverse(a, 0, n - 1);
}

void reverse(int a[], int s, int e)
{
    int temp;
    while (s < e)
    {
        temp = a[s];
        a[s] = a[e];
        a[e] = temp;
        s++;
        e--;
    }
}

void printArray(int a[], int n)
{
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}