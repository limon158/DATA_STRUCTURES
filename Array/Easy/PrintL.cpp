#include <bits/stdc++.h>
using namespace std;
void printI(int n);
void printL(int n1, int n2);
int main(void)
{
    system("cls");
    system("color A");
    int size;
    int vertLine, horizlLine;
    cout << "\nFont size(min 4)-> ";
    cin >> size;
    if (size < 4)
    {
        cout << "\nInvalid font size" << endl;
        system("pause");
        system("cls");
        return 0;
    }
    vertLine = size;
    horizlLine = size / 2;
    printL(vertLine, horizlLine);
    printI(vertLine);
    system("pause");
    system("cls");
    return 0;
}
void printI(int n)
{
    int i;
    cout << endl;
    for (i = 0; i < n; i++)
        cout << " * *" << endl;
}
void printL(int n1, int n2)
{
    system("cls");
    int i, j, k;
    for (i = 0; i < n1; i++)
        cout << "* *" << endl;
    for (j = 0; j < n2; j++)
        cout << "* * ";
    cout << endl;
    for (k = 0; k < n2; k++)
        cout << "* * ";
    cout << endl;
}