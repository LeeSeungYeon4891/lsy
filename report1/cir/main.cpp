#include <iostream> 
using namespace std;

#include "car.h"

int main() 
{
	while (1)
	{
		int num = 0;

		Car parking;

		cout << "���� ��ȣ : ";
		cin >> num;

		parking.set_info(num);

		parking.car_number1();
	}
}
