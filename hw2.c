#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	double km, miles;
	printf("Please enter klometers : ");
	scanf("%lf", &km);

	miles = km / 1.609;

	printf("%.1f km is equal to %.1f miles", km, miles);

	return 0;
}
