#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

double deviation(double a[]) {
	double sum = 0, avg = 0, v = 0, s = 0;

	for (int i = 0; i < 5; i++) {
		sum += a[i];
	}

	avg = (double)sum / 5;

	for (int j = 0; j < 5; j++) {
		v += pow((a[j] - avg), 2);
	}

	s = sqrt(v/5);

	return s;
}

int main() 
{
	double a[5];
	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++) {
		scanf("%lf", &a[i]);
	}

	printf("Standard Deviation = %0.3lf\n", deviation(a));
	return 0;
}

