#include <stdio.h>
#include <stdbool.h>

int newMas(int mas[], int size, int M, int rez[]) {
	int ind = 0;

	for (int i = 0; i < size; i++) {
		if (mas[i] % M == 0) {
			rez[ind++] = mas[i];
		}
	}

	return ind;
}

int main(void) {
	int inmas[5] = { 2, 14, 7, 5, 13 };
	int outmas[5] = { 0 };
	int size = 5;

	int num = newMas(inmas, size, 2, outmas);

	printf("Inmas: ");
	for (int i = 0; i < size; i++) {
		printf("%i ", inmas[i]);
	}

	printf("\nOutmas: ");
	for (int i = 0; i < num; i++) {
		printf("%i ", outmas[i]);
	}
	printf("\n");


	return 0;
}