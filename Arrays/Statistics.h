#pragma once
#include"stdafx.h"
#include"constants.h"
int Sum(int arr[], const int n);
int Sum(double arr[], const int n);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);

int MinValue(int arr[], const int n);
double MinValue(double arr[], const int n);
int MinValue(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MinValue(double arr[ROWS][COLS], const int ROWS, const int COLS);

int MaxValue(int arr[], const int n);
double MaxValue(double arr[], const int n);
int MaxValue(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MaxValue(double arr[ROWS][COLS], const int ROWS, const int COLS);

void ShiftLeft(int arr[], const int n, const int shifts);
void ShiftLeft(double arr[], const int n, const int shifts);
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int shifts);
//void ShiftLeft(double arr[ROWS][COLS], const int ROWS, int COLS);

