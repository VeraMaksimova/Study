﻿//В каждой строке заданной матрицы A(N, M) вычислить сумму, количество и среднее арифметическое положительных элементов.


//При помощи индексов
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	const int N = 10, M = 10;
	int A[N][M];
	for (int n = 0; n < N; n++)//Заполенение матрицы случайными числами
	{
		for (int m = 0; m < M; m++)
		{
			A[n][m] = rand() % 200 - 100;
		}
	}

	double counter[N], sum[N], avg[N];//объявление переменных-счетчиков
	for (int i = 0; i < N; i++)
	{
		counter[i] = 0;
		sum[i] = 0;
		avg[i] = 0;
	}

	for (int n = 0; n < N; n++)//вычисление среднего арифметического, суммы, количество положительных значений в строке матрицы
	{
		for (int m = 0; m < M; m++)
		{
			if (A[n][m] > 0)
			{
				counter[n]++;
				sum[n] += A[n][m];
			}
		}
		avg[n] = sum[n] / counter[n];
		cout << "Количество положительных чисел на ряду №" << n+1 << " равно " << counter[n] << endl;//Вывод ответов на экран
		cout << "Среднее арифметическое положительных чисел на ряду №" << n+1 << " равно " << avg[n] << endl;
		cout << "Сумма положительных чисел на ряду №" << n+1 << " равна " << sum[n] << endl;
		cout << "-----------------------------------------------------------------------------" << endl;
	}

	return 0;
}