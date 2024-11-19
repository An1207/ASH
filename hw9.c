#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void transpose(char ch, char* output) {
    if (ch >= 'A' && ch <= 'Z') {
        *output = ch + ('a' - 'A');
    }
    else if (ch >= 'a' && ch <= 'z') {
        *output = ch - ('a' - 'A');
    }
    else {
        *output = ch;
    }
}

int main(void)
{
    char ch;
    char output[100];  
    int i = 0;

    printf("Input> ");
    while ((ch = getchar()) != '\n') {
        transpose(ch, &output[i]);
        i++;
    }

    printf("Output> ");
    for (int j = 0; j < i; j++) {
        printf("%c", output[j]);
    }
 
    return 0;
}


