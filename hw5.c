#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void transduction(int n) {
	if (n == 0 || n == 1) {
		printf("%d", n);
	}
	else {
		transduction(n / 2);
		printf("%d", n % 2);
	}
}

int main()
{
	int i;
	printf("Please enter a number: ");
	scanf("%d", &i);

	transduction(i);
	return ("\n");
	system("pause");
	return 0;
}