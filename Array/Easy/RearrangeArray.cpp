// Rearrange array such that even positioned are greater than odd
#include <bits/stdc++.h>
using namespace std;
void rearrange(int a[], int n);
int main()
{
    system("cls");
    int size;
    cout << "size-> ";
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "i-" << i << "-> ";
        cin >> array[i];
    }
    rearrange(array, size);
    return 0;
}

void rearrange(int a[], int n)
{
    sort(a, a + n);

    int newArr[n];
    int l = 0, r = n - 1;
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            newArr[i] = a[r];
            r--;
        }
        else
        {
            newArr[i] = a[l];
            l++;
        }
    }
    for (int j = 0; j < n; j++)
        cout << newArr[j] << endl;
}