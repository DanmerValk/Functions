#include"Sum.h"
int Sum(int arr[], const int n)
{
	int Sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}
int Sum(double arr[], const int n)
{
	double Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int Sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Sum += arr[i][j];
		}
	}
	return Sum;
}
int Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double Sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Sum += arr[i][j];
		}
	}
	return Sum;
}
