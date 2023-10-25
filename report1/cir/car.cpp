#include <iostream> 
#include <cstring>
using namespace std;

#include "car.h"

char input[10] = "4891";

void Car::set_info(int num)
{
	name = num;
}

// Clrcle 클래스 구현. 모든 멤버 함수를 작성한다.
void Car::car_number1()
{

	if (name == 4891)
	{
		cout << "\n차량 번호: 4891\n이용시간 : 1시간 30분\n요금: 6,000입니다.\n\n";

	}
	if (name == 9838)
	{
		cout << "\n차량 번호: 9838\n이용시간 : 2시간 30분\n요금: 9,000입니다.\n\n";
	}
	if (name == 3898)
	{
		cout << "\n차량 번호: 3898\n이용시간 : 30분\n요금: 1,000입니다.\n\n";
	}
	if (name == 1234)
	{
		cout << "\n차량 번호: 1234\n이용시간 : 60분\n요금: 2,000입니다.\n\n";
	}
}

#if 0
	if (strncmp(input, "9838", 4) == 0)
	{
		cout << "\n차량 번호: 9838\n이용시간 : 2시간 30분\n요금: 9,000입니다.\n";
	}
	if (strncmp(input, "3898", 4) == 0)
	{
		cout << "\n차량 번호: 3898\n이용시간 : 30분\n요금: 1,000입니다.\n";
	}
	if (strncmp(input, "1234", 4) == 0)
	{
		cout << "\n차량 번호: 1234\n이용시간 : 60분\n요금: 2,000입니다.\n";
	}
}

void Car::car_number2()
{
	if (strncmp(input, "9838", 4) == 0)
	{
		cout << "\n차량 번호: 9838\n이용시간 : 2시간 30분\n요금: 9,000입니다.\n";
	}
}

void Car::car_number3()
{
	if (strncmp(input, "3898", 4) == 0)
	{
		cout << "\n차량 번호: 3898\n이용시간 : 30분\n요금: 1,000입니다.\n";
	}
}

void Car::car_number4()
{
	if (strncmp(input, "1234", 4) == 0)
	{
		cout << "\n차량 번호: 1234\n이용시간 : 60분\n요금: 2,000입니다.\n";
	}
}
#endif