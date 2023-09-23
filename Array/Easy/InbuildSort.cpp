#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int array[5] = {5, 6, 1, 3, 2};
    int n = 5;
    sort(array, array + n);
    for (int i = 0; i < n; i++)
        cout << array[i] << endl;
}