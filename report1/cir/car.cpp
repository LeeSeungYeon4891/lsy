#include <iostream> 
#include <cstring>
using namespace std;

#include "car.h"

char input[10] = "4891";

void Car::set_info(int num)
{
	name = num;
}

// Clrcle Ŭ���� ����. ��� ��� �Լ��� �ۼ��Ѵ�.
void Car::car_number1()
{

	if (name == 4891)
	{
		cout << "\n���� ��ȣ: 4891\n�̿�ð� : 1�ð� 30��\n���: 6,000�Դϴ�.\n\n";

	}
	if (name == 9838)
	{
		cout << "\n���� ��ȣ: 9838\n�̿�ð� : 2�ð� 30��\n���: 9,000�Դϴ�.\n\n";
	}
	if (name == 3898)
	{
		cout << "\n���� ��ȣ: 3898\n�̿�ð� : 30��\n���: 1,000�Դϴ�.\n\n";
	}
	if (name == 1234)
	{
		cout << "\n���� ��ȣ: 1234\n�̿�ð� : 60��\n���: 2,000�Դϴ�.\n\n";
	}
}

#if 0
	if (strncmp(input, "9838", 4) == 0)
	{
		cout << "\n���� ��ȣ: 9838\n�̿�ð� : 2�ð� 30��\n���: 9,000�Դϴ�.\n";
	}
	if (strncmp(input, "3898", 4) == 0)
	{
		cout << "\n���� ��ȣ: 3898\n�̿�ð� : 30��\n���: 1,000�Դϴ�.\n";
	}
	if (strncmp(input, "1234", 4) == 0)
	{
		cout << "\n���� ��ȣ: 1234\n�̿�ð� : 60��\n���: 2,000�Դϴ�.\n";
	}
}

void Car::car_number2()
{
	if (strncmp(input, "9838", 4) == 0)
	{
		cout << "\n���� ��ȣ: 9838\n�̿�ð� : 2�ð� 30��\n���: 9,000�Դϴ�.\n";
	}
}

void Car::car_number3()
{
	if (strncmp(input, "3898", 4) == 0)
	{
		cout << "\n���� ��ȣ: 3898\n�̿�ð� : 30��\n���: 1,000�Դϴ�.\n";
	}
}

void Car::car_number4()
{
	if (strncmp(input, "1234", 4) == 0)
	{
		cout << "\n���� ��ȣ: 1234\n�̿�ð� : 60��\n���: 2,000�Դϴ�.\n";
	}
}
#endif