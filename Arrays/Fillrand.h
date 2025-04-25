#pragma once
#include"stdafx.h"
#include"constants.h"

void Fillrand(int arr[], const int n);
void Fillrand(double arr[], const int n);
void Fillrand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void Fillrand(double arr[ROWS][COLS], const int ROWS, const int COLS);

