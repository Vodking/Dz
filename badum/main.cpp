#include<iostream>
#include<Windows.h>
#include <cstdlib>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	//������ 1
	std::cout << "������� 1 ";
	const int size = 10;
	int arr[size];
	int max, min;
	std::cout << "\n�������� ������: ";
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
	//������ 2
	std::cout << "������� 2";
	int arr2[size];
	int diapr1, diapr2, temp, usl;
	int sum = 0;
	std::cout << "\n������� ������ ���������: ";
	std::cin >> diapr1;
	std::cout << "\n������� ����� ���������: ";
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
	std::cout << "\n �������� ������: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";

	}
	std::cout << "\n������� ����� �������: ";
	std::cin >> usl;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < usl)
		{
			sum += arr[i];
		}

	}
	std::cout << "\n����� ����� ������ " << usl << " = " << sum;


	std::cout << "\n������� 3";
	//������ 3
	float months[12];
	min = 2147483647;
	max = 0;
	int diap1;
	int diap2;
	for (int i = 0; i != 12; i++)
	{
		cout << "\n������� �������: ";
		cin >> months[i];
	}
	cout << "\n������� ����� ������ ��� ������ ���������: ";
	cin >> diap1;
	cout << "\n������� ����� ������ ��� ����� ���������: ";
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
				cout << "������������ ������� � ������ = " << max;
			}
			else if (i == 2)
			{
				cout << "������������ ������� � ������� = " << max;
			}
			else if (i == 3)
			{
				cout << "������������ ������� � ����� = " << max;
			}
			else if (i == 4)
			{
				cout << "������������ ������� � ������ = " << max;
			}
			else if (i == 5)
			{
				cout << "������������ ������� � ��� = " << max;
			}
			else if (i == 6)
			{
				cout << "������������ ������� � ���� = " << max;
			}
			else if (i == 7)
			{
				cout << "������������ ������� � ���� = " << max;
			}
			else if (i == 8)
			{
				cout << "������������ ������� � ������� = " << max;
			}
			else if (i == 9)
			{
				cout << "������������ ������� � �������� = " << max;
			}
			else if (i == 10)
			{
				cout << "������������ ������� � ������� = " << max;
			}
			else if (i == 11)
			{
				cout << "������������ ������� � ������ = " << max;
			}
			else if (i == 12)
			{
				cout << "������������ ������� � ������� = " << max;
			}
		}
		if (months[i] == min)
		{
			if (i == 1)
			{
				cout << " ����������� ������� � ������ = " << min;
			}
			else if (i == 2)
			{
				cout << " ����������� ������� � ������� = " << min;
			}
			else if (i == 3)
			{
				cout << " ����������� ������� � ����� = " << min;
			}
			else if (i == 4)
			{
				cout << " ����������� ������� � ������ = " << min;
			}
			else if (i == 5)
			{
				cout << " ����������� ������� � ��� = " << min;
			}
			else if (i == 6)
			{
				cout << " ����������� ������� � ���� = " << min;
			}
			else if (i == 7)
			{
				cout << " ����������� ������� � ���� = " << min;
			}
			else if (i == 8)
			{
				cout << " ����������� ������� � ������� = " << min;
			}
			else if (i == 9)
			{
				cout << " ����������� ������� � �������� = " << min;
			}
			else if (i == 10)
			{
				cout << " ����������� ������� � ������� = " << min;
			}
			else if (i == 11)
			{
				cout << " ����������� ������� � ������ = " << min;
			}
			else if (i == 12)
			{
				cout << " ����������� ������� � ������� = " << min;
			}
		}
	}
}