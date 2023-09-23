#include <bits/stdc++.h>
using namespace std;
void findLargeThree(int a[], int n);
int main()
{
    int size, list[20];
    cout << "\nSize-> ";
    cin >> size;
    if(size < 3)
    {
        cout << "Invalid I/P !!!";
        return 0;
    }
    for(int i = 0; i < size; i++)
    {
        cout << "i-" << i << "-> ";
        cin >> list[i];
    }

    findLargeThree(list, size);
    system("pause");
    system("cls");
    return 0;
}

void findLargeThree(int a[], int n)
{
    int f, s, t;
    f = s = t = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > f)
        {
            t = s;
            s = f;
            f = a[i];
        }
        else if (a[i] > s && a[i] != f)
        {
            t = s;
            s = a[i];
        }
        else if (a[i] > t && a[i] != s)
        {
            t = a[i];
        }
    }
    cout << "\nFirst 3 large :" << t << " < " << s << " < " << f << endl;
}