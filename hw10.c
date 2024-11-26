#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

typedef struct city
{
    char Name[100];
	char Country[100];
	int Population;
} City;

void inputcities(City city[], int a)
{
	for (int i = 0; i < a; i++) {
		printf("Name> ");
		fgets(city[i].Name, sizeof(city[i].Name), stdin);
		city[i].Name[strcspn(city[i].Name, "\n")] = '\0';
		printf("Country> ");
		fgets(city[i].Country, sizeof(city[i].Country), stdin);
		city[i].Country[strcspn(city[i].Country, "\n")] = '\0';
		printf("Population> ");
		scanf("%d", &city[i].Population);
		getchar();
	}
}

int main()
{
	int a = 3;
	City city[100];
	printf("Input three cities : \n");
	inputcities(city, a);

	printf("Printing the three cities : \n");
	for (int i = 0; i < a; i++) {
		printf("%d. %s in %s with a population of %d people\n", i + 1, city[i].Name, city[i].Country, city[i].Population);
	}

	return 0;
}