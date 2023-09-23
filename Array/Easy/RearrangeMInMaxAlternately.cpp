#include <bits/stdc++.h>
using namespace std;
void rearrange(int a[], int n)
{
    sort(a, a + n);
    int temp[n];
    int left = 0, right = n - 1;
    int flag = true;

    for (int i = 0; i < n; i++)
    {
        if (flag)
            temp[i] = a[right--];
        else
            temp[i] = a[left++];

        flag = !flag;
    }
    for (int j = 0; j < n; j++)
        a[j] = temp[j];
}
int main()
{
    system("cls");
    int n;
    cout << "size-> ";
    cin >> n;
    int array[n];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        cout << "i-" << i << "-> ";
        cin >> array[i];
    }
    system("cls");
    cout << "\nbefore rearrange: " << endl;
    for (i = 0; i < n; i++)
        cout << array[i] << " ";
    rearrange(array, n); //call the rearrange function:
    cout << "\nafter rearrange: " << endl;
    for (i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << endl;
    system("pause");
    system("cls");
    return 0;
}