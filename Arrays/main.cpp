#include"stdafx.h"
#include"constants.h"
#include"Fillrand.h"
#include"Print.h"
#include"Sort.h"
#include"Sum.h"
#include"Avg.h"
#include"MinValue.h"
#include"MaxValue.h"
#include"ShiftLeft.h"
//#include"constants.h"

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
	cout << "введите колличество сдвигов в лево: "; cin >> shifts;
	ShiftLeft(arr, n, shifts);
	Print(arr, n);
	cout << "введите коллчество сдвигов в право: "; cin >> shifts;
	ShiftLeft(arr, n, shifts);
	Print(arr, n);

	const int SIZE = 5;
	double brr[n];
    Fillrand(brr, n);
	Print(brr, n);
	Sort(brr, n);
	Print(brr, n);
	cout << "сумма элемента массива: " << Sum(brr, n) << endl;
	cout << "средне-арифметическое: " << Avg(brr, n) << endl;
	cout << "минимальное значение в массиве: " << MinValue(brr, n) << endl;
	cout << "максимальное значение в массиве: " << MaxValue(brr, n) << endl;
	cout << "введите коллчество сдвигов в лево: "; cin >> shifts;
	ShiftLeft(arr, n, shifts);
	Print(arr, n);
	
	cout << delimiter << endl;
	int i_arr_2[ROWS][COLS] =
	{
		{3,5,8},
	    {13,21,34},
	    {55,89,144},
	};
	Fillrand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "сумма элемента массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "средне-арифметическое: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "минимальное значение в массиве: " << MinValue(i_arr_2, ROWS, COLS) << endl;
	cout << "максимальное значение в массиве: " << MaxValue(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	//int shifts;
	cout << "введите коллчество сдвигов в лево: "; cin >> shifts;
	ShiftLeft(i_arr_2, ROWS, COLS, shifts);
	Print(i_arr_2, ROWS, COLS);
	
}