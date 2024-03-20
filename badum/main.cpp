#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	//Задача 1
	int arr[5];
	int max = 0;
	int min = 2147483647;
	for (int i = 0; i != 5; i++)
	{
		cout << "Введите число: \n";
		cin >> arr[i];
	}
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
	cout << "min = " << min << " max = " << max << "\n\n\n";
	//Задача 2
	int arr2[5];
	int usl;
	int sum = 0;
	for (int i = 0; i != 5; i++)
	{
		cout << "Введите число: \n";
		cin >> arr2[i];
	}
	cout << "\n Введите число для условия: \n";
	cin >> usl;
	for (int i = 0; i != 5; i++)
	{
		if (arr2[i] < usl)
		{
			sum += arr2[i];
		}
	}
	cout << "sum = " << sum << "\n\n\n";
	//Задача 3
	float months[12];
	min = 2147483647;
	max = 0;
	int diap1;
	int diap2;
	for (int i = 0; i != 12; i++)
	{
		cout << "Введите прибыль: \n";
		cin >> months[i];
	}
	cout << "Введите число месяца для начала диапазона: \n";
	cin >> diap1;
	cout << "Введите число месяца для конца диапазона: \n";
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