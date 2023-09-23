
#include <bits/stdc++.h>
using namespace std;

void genRand(int a[], int n)
{
	srand(time(NULL));
	int i = 0;
	while(i < n)
	{
		a[i] = 1 + rand() % 100;
		i++;
	}
}

void print(int a[], int n)
{
	int i = 0;
	while (i < n)
	{
		cout << "index[" << i << "]: " << a[i] << endl;
		i++;
	}
}

void bubbleSort(int a[], int n)
{
	int i, j, temp;
	int flag = 0;

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				flag++;
			}
		}
		if (flag == 0)
		{
			cout << "\nAlready sorted" << endl;
			break;
		}
	}
	print(a, n);
}

int main(void)
{

	for (;;)
	{
		int LA[100], size;
		int i = 0;

		cout << "\nSize > ";
		cin >> size;

		cout << "\nElements." << endl;
		/*
		while (i < size)
		{
			cout << "index[" << i << "]: ";
			cin >> LA[i];
			i++;
		}
		*/
		genRand(LA, size);

		cout << "\nSorted." << endl;

		bubbleSort(LA, size);

		int flag = 0;
		cout << "\n1.Continue [1]" << endl
			 << "2.Exit [0]" << endl
			 << "Enter > ";
		cin >> flag;
		if (flag != 1)
		{
			return 0;
		}
	
	}
}