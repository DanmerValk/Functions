#include<iostream>
using namespace std;

#define delimiter "\n*/*-/*-/*-/*-/*--/*-/*-/*--\n"

const int ROWS = 4;
const int COLS = 5;
void Fillrand(int arr[], const int n);
void Fillrand(double arr[], const int n);
void Fillrand(int arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>
void Print(T arr[], const int n);
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>
void Sort(T arr[], const int n);
//template<typename T>
//void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>
T Sum(T arr[], const int n);
//int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>
double Avg(T arr[], const int n);
template<typename T>
T MinValue(T arr[], const int n);
template<typename T>
T MaxValue(T arr[], const int n);
template<typename T>
void ShiftLeft(T arr[], const int n, const int shifts);
template<typename T>
void ShiftRigth(T arr[], const int n, const int shifts);

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
}

void Fillrand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Fillrand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void Fillrand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand();
		}
	}
}
template<typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
		cout << endl;
}
template<typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	
}
//template<typename T>
/*void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = i + 1; j < COLS; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}*/
template<typename T>
T Sum(T arr[], const int n)
{
	T Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];	
    }
	return Sum;
}
template<typename T>
double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template<typename T>
T MinValue(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
template<typename T>
T MaxValue(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
template<typename T>
void ShiftLeft(T arr[], const int n, const int shifts)
{
	for (int i = 0; i < shifts; i++)
	{
		T buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
        arr[n - 1] = buffer;
	}
	
}
template<typename T>
void ShiftRigrh(T arr[], const int n, const int shifts)
{
	for (int i = 0; i < shifts; i++)
	{
		T buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i + 1] = arr[i];
		}
		arr[n + 1] = buffer;
	}

}

