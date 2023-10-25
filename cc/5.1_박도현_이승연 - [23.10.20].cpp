#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define PI  3.141592

float spin_count(float _distance, float _diameter);
float angle_value(float _distance, float _diameter);

int main()
{
	float distance, diameter;

	while(1)
	{
		printf("이동할 거리: ");
		scanf("%f", &distance);

		printf("바퀴의 지름: ");
		scanf("%f", &diameter);

		printf("\n\n 회전해야할 바퀴의 회전 수, 각도 : %0.2f바퀴 , %0.2f도 \n\n", spin_count(distance, diameter), angle_value(distance, diameter));
	}
}
float spin_count(float _distance, float _diameter)
{
	return _distance / (_diameter * PI);
}
float angle_value(float _distance, float _diameter)
{
	return (_distance / (_diameter * PI)) * 360;
}