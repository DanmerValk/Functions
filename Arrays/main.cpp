#include"stdafx.h"
#include"Const.h"
#include"Fillrand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"

void main()
{
	setlocale(LC_ALL, "ru");
	const int n = 5;
	int arr[n];
	int shifts;
	Fillrand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "сумма элемента массива: " << Sum(arr, n) << endl;
	cout << "средне-арифметическое: " << Avg(arr, n) << endl;
	cout << "минимальное значение в массиве: " << MinValue(arr, n) << endl;
	cout << "ммаксимальное значение в массиве: " << MaxValue(arr, n) << endl;
	cout << "введите колличество сдвигов: "; cin >> shifts;
	ShiftLeft(arr, n, shifts);
	Print(arr, n);
	cout << "введите коллчество сдвигов: "; cin >> shifts;
	ShiftLeft(arr, n, shifts);
	Print(arr, n);

	const int SIZE = 8;
	double brr[SIZE];
    //int shifts;
	Fillrand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "сумма элемента массива: " << Sum(brr, SIZE) << endl;
	cout << "средне-арифметическое: " << Avg(brr, SIZE) << endl;
	cout << "минимальное значение в массиве: " << MinValue(brr, SIZE) << endl;
	cout << "максимальное значение в массиве: " << MaxValue(brr, SIZE) << endl;
	cout << "введите коллчество сдвигов: "; cin >> shifts;
	ShiftLeft(brr, SIZE, shifts);
	Print(brr, SIZE);
	cout << "введите коллчество сдвигов: "; cin >> shifts;
	ShiftLeft(brr, SIZE, shifts);
	Print(brr, SIZE);

	cout << delimiter << endl;
	int i_arr_2[ROWS][COLS] =
	{
		{3,5,8},
	    {13,21,34},
	    {55,89,144},
	};
	Fillrand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	//Sort(i_arr_2, ROWS, COLS);
	//Sum(i_arr_2, ROWS, COLS);
}