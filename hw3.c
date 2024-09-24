#include <stdio.h>

int main() {
	for (int a = 0; a < 5; a++) {
		for (int b = 0; b < 5 - a; b++) {
			printf(" ");
		}
		for (int c = 0; c < 2 * a + 1; c++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}