#if 1//5.1-우창민


#include <stdio.h>
#pragma warning (disable:4996)


//5.1 직선이동

#define PI 3.14159265
float count_rotate(float* diameter, float* distance)
{
	float circle_round, rotate_count;
	circle_round = *diameter * PI;
	rotate_count = *distance / circle_round;
	return rotate_count;
}


int main(void)
{
	float diameter, distance;
	float rotate_count;

	printf("1. 이동할 거리(m) : ");
	scanf_s("%f", &distance);
	printf("2. 바퀴의 지름(m) : ");
	scanf_s("%f", &diameter);

	rotate_count = count_rotate(&diameter, &distance);
	printf("회전수:%.2f, 각도: %.2f", rotate_count, rotate_count * 360);
}

#endif
