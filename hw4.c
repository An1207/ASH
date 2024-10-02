#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b;
	printf("Please enter a number : ");
	scanf("%d", &a);
	if (a > 0) {
		if (a == 1) 
			printf("It is not a prime number");
		for (b = 2; b < a; b++)
		{
			if (a % b == 0) {
				printf("It is not a prime number");
				break;
			}
		}
		if (a == b) {
			printf("It is a prime number");
		}
	}
	return 0;
}
