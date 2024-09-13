#define _CRE_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int a, b;
	printf("Input two integers: ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("%d & %d = %d\n", a, b, a & b);
	printf("%d | %d = %d\n", a, b, a | b);
	printf("%d ^ %d = %d\n", a, b, a ^ b);
	
	return 0;
}