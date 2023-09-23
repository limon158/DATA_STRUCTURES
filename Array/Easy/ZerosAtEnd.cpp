#include <iostream>
using namespace std;
void zerosAtEnd(int a[], int n);
int main()
{
    system("cls");
    int size;
    cout << "size-> ";
    cin >> size;
    int array[size], i = 0;
    while (i < size)
    {
        cout << "i-" << i << "-> ";
        cin >> array[i];
        i++;
    }
    zerosAtEnd(array, size);
    i = 0;
    while (i < size)
    {
        cout << array[i] << ", ";
        i++;
    }
    cout << endl;
    system("pause");
    system("cls");
    return 0;
}
void zerosAtEnd(int a[], int n)
{
    int ctr = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[ctr] = a[i];
            ctr++;
        }
    }
    
    while (ctr < n)
    {
        a[ctr] = 0;
        ctr++;
    }
}