#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	//������ 1
	int arr[5];
	int max = 0;
	int min = 2147483647;
	for (int i = 0; i != 5; i++)
	{
		cout << "������� �����: \n";
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
	//������ 2
	int arr2[5];
	int usl;
	int sum = 0;
	for (int i = 0; i != 5; i++)
	{
		cout << "������� �����: \n";
		cin >> arr2[i];
	}
	cout << "\n ������� ����� ��� �������: \n";
	cin >> usl;
	for (int i = 0; i != 5; i++)
	{
		if (arr2[i] < usl)
		{
			sum += arr2[i];
		}
	}
	cout << "sum = " << sum << "\n\n\n";
	//������ 3
	float months[12];
	min = 2147483647;
	max = 0;
	int diap1;
	int diap2;
	for (int i = 0; i != 12; i++)
	{
		cout << "������� �������: \n";
		cin >> months[i];
	}
	cout << "������� ����� ������ ��� ������ ���������: \n";
	cin >> diap1;
	cout << "������� ����� ������ ��� ����� ���������: \n";
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