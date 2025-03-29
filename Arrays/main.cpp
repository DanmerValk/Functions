#include<iostream>
using namespace std;
void Fillrand(int arr[], const int n);
void Print(int arr[], const int n);
void Sort(int arr[], const int n);
int Sum(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "ru");
	const int n = 5;
	int arr[n];
	Fillrand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	const int SIZE = 8;
	int brr[SIZE];
	Fillrand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	Sum(arr, n);
	//Print(arr, n);
}
void Fillrand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	
}
int Sum(int arr[], const int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];	
    }
	return Sum\n;
}
