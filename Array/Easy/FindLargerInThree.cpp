/*
Given an array with all distinct elements, find the largest three elements. Expected time complexity is O(n) and extra space is O(1).
Algo:
1) Initialize the largest three elements as minus infinite.
    first = second = third = -?
2) Iterate through all elements of array.
   a) Let current array element be x.
   b) If (x > first)
      {
          // This order of assignment is important
          third = second
          second = first
          first = x
       }
   c)  Else if (x > second and x != first)
      {
          third = second
          second = x
      }
   d)  Else if (x > third and x != second)
      {
          third = x
      }
3) Print first, second and third.

*/
#include <iostream>
#include <limits.h>
using namespace std;

// Method- 1;

void FindLargeThree(int a[], int n)
{
    int first, second, third;
    third = second = first = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > first)
        {
            third = second;
            second = first;
            first = a[i];
        }
        else if (a[i] > second && a[i] != first)
        {
            third = second;
            second = a[i];
        }
        else if (a[i] > third && a[i] != second && a[i] != first)
        {
            third = a[i];
        }
    }
    cout << "\nFirst 3 large :" << third << " < " << second << " < " << first << endl;
}

int main()
{
    system("cls");
    int N;
    cout << "\nN-> ";
    cin >> N;
    if (N < 3)
    {
        cout << "\nN < 3, I/P Invalid!" << endl;
        return 0;
    }
    int Array[N];
    for (int i = 0; i < N; i++)
    {
        cout << "i-" << i << "-> ";
        cin >> Array[i];
    }
    FindLargeThree(Array, N);
    system("pause");
    system("cls");
    return 0;
}
