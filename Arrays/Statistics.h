#pragma once
#include"stdafx.h"
#include"Const.h"
int Sum(int arr[], const int n);
int Sum(double arr[], const int n);
//int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);

int MinValue(int arr[], const int n);
double MinValue(double arr[], const int n);

int MaxValue(int arr[], const int n);
double MaxValue(double arr[], const int n);

void ShiftLeft(int arr[], const int n, const int shifts);
void ShiftLeft(double arr[], const int n, const int shifts);

void ShiftRigth(int arr[], const int n, const int shifts);
void ShiftRigth(double arr[], const int n, const int shifts);

