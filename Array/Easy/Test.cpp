#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int n = 7;
	// for (int i = 0; i < n; i++)
	// {
	// 	cout << arr[i] << endl;
	// }

	int start = 0, end = n - 1;

		int temp;
		while (start < end)
		{
			temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;
			start++;
			end--;
		}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}