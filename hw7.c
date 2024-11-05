#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void swap(int a[], int b[])
{
	int* al = &a[0];
	int* bl = &b[0];
	for (int i = 0; i < 6; i++) {
		int temp = *al;
		*al = *bl;
		*bl = temp;
		al++;
		bl++;
	}

}


int main()
{
	int a[6] = { 1, 2, 3, 4, 5, 6 };
	int b[6] = { 7, 8, 9, 10, 11, 12 };

	printf("arr1 = ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", a[i]);
	}
	printf("\narr2 = ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", b[i]);
	}
	swap(a, b);
	printf("\n\nafter swap\narr1 = ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", a[i]);
	}
	printf("\narr2 = ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", b[i]);
	}

	return 0;
}