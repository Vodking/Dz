#include<iostream>
#include<Windows.h>
#include <cstdlib>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	//Задача 1
	std::cout << "Задание 1 ";
	const int size = 10;
	int arr[size];
	int max, min;
	std::cout << "\nИсходный массив: ";
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
		std::cout << arr[i] << " ";
	}
	max = arr[1];
	min = arr[1];
	for (int i = 0; i != 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "\nmin = " << min << " max = " << max << "\n\n\n";
	//Задача 2
	std::cout << "Задание 2";
	int arr2[size];
	int diapr1, diapr2, temp, usl;
	int sum = 0;
	std::cout << "\nВведите начало диапазона: ";
	std::cin >> diapr1;
	std::cout << "\nВведите конец диапазона: ";
	std::cin >> diapr2;
	if (diapr1 > diapr2)
	{
		temp = diapr1;
		diapr1 = diapr2;
		diapr2 = temp;
	}
	for (int i = 0; i < size; i++)
	{
		arr2[i] = rand() % diapr2 + diapr1;
		
	}
	std::cout << "\n исходный массив: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";

	}
	std::cout << "\nВведите число условие: ";
	std::cin >> usl;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < usl)
		{
			sum += arr[i];
		}

	}
	std::cout << "\nСумма чисел меньше " << usl << " = " << sum;


	std::cout << "\nЗадание 3";
	//Задача 3
	float months[12];
	min = 2147483647;
	max = 0;
	int diap1;
	int diap2;
	for (int i = 0; i != 12; i++)
	{
		cout << "\nВведите прибыль: ";
		cin >> months[i];
	}
	cout << "\nВведите число месяца для начала диапазона: ";
	cin >> diap1;
	cout << "\nВведите число месяца для конца диапазона: ";
	cin >> diap2;
	diap1++;
	diap2++;
	for (; diap1 != diap2; diap1++)
	{
		if (months[diap1] > max)
		{
			max = months[diap1];
		}
		if (months[diap1] < min)
		{
			min = months[diap1];
		}
	}
	for (int i = 0; i != 12; i++)
	{
		if (months[i] == max)
		{
			if (i == 1)
			{
				cout << "Максимальная прибыль в январе = " << max;
			}
			else if (i == 2)
			{
				cout << "Максимальная прибыль в феврале = " << max;
			}
			else if (i == 3)
			{
				cout << "Максимальная прибыль в марте = " << max;
			}
			else if (i == 4)
			{
				cout << "Максимальная прибыль в апреле = " << max;
			}
			else if (i == 5)
			{
				cout << "Максимальная прибыль в мае = " << max;
			}
			else if (i == 6)
			{
				cout << "Максимальная прибыль в июне = " << max;
			}
			else if (i == 7)
			{
				cout << "Максимальная прибыль в июле = " << max;
			}
			else if (i == 8)
			{
				cout << "Максимальная прибыль в августе = " << max;
			}
			else if (i == 9)
			{
				cout << "Максимальная прибыль в сентябре = " << max;
			}
			else if (i == 10)
			{
				cout << "Максимальная прибыль в октябре = " << max;
			}
			else if (i == 11)
			{
				cout << "Максимальная прибыль в ноябре = " << max;
			}
			else if (i == 12)
			{
				cout << "Максимальная прибыль в декабре = " << max;
			}
		}
		if (months[i] == min)
		{
			if (i == 1)
			{
				cout << " Минимальная прибыль в январе = " << min;
			}
			else if (i == 2)
			{
				cout << " Минимальная прибыль в феврале = " << min;
			}
			else if (i == 3)
			{
				cout << " Минимальная прибыль в марте = " << min;
			}
			else if (i == 4)
			{
				cout << " Минимальная прибыль в апреле = " << min;
			}
			else if (i == 5)
			{
				cout << " Минимальная прибыль в мае = " << min;
			}
			else if (i == 6)
			{
				cout << " Минимальная прибыль в июне = " << min;
			}
			else if (i == 7)
			{
				cout << " Минимальная прибыль в июле = " << min;
			}
			else if (i == 8)
			{
				cout << " Минимальная прибыль в августе = " << min;
			}
			else if (i == 9)
			{
				cout << " Минимальная прибыль в сентябре = " << min;
			}
			else if (i == 10)
			{
				cout << " Минимальная прибыль в октябре = " << min;
			}
			else if (i == 11)
			{
				cout << " Минимальная прибыль в ноябре = " << min;
			}
			else if (i == 12)
			{
				cout << " Минимальная прибыль в декабре = " << min;
			}
		}
	}
}