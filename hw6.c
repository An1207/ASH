#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int arr[5], odd[5], even[5];
    int oddCount = 0, evenCount = 0;

    printf("Please input five integers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        }
        else {
            odd[oddCount++] = arr[i];
        }
    }

    printf("Odd numbers: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    printf("Even numbers: ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    scanf("%d", &arr[0]);
    return 0;
}