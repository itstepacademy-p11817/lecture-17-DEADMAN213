#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int mas1[5] = { -1, 0, -3, 3, 1 };
	int mas2[5] = { -7, 4, 6, 0, 0 };
	int rezmas[10] = { 0 };
	int ind = 0;
	int size = 5;

	printf("Mas 1: ");
	for (int i = 0; i < size; i++) {
		printf("%i ", mas1[i]);
	}

	printf("\nMas 2: ");
	for (int i = 0; i < size; i++) {
		printf("%i ", mas2[i]);
	}


	for (int i = 0; i < size; i++) {
		if (mas1[i] < 0) {
			rezmas[ind++] = mas1[i];
		}
		if (mas2[i] < 0) {
			rezmas[ind++] = mas2[i];
		}
	}

	for (int i = 0; i < size; i++) {
		if (mas1[i] == 0) {
			rezmas[ind++] = mas1[i];
		}
		if (mas2[i] == 0) {
			rezmas[ind++] = mas2[i];
		}
	}

	for (int i = 0; i < size; i++) {
		if (mas1[i] > 0) {
			rezmas[ind++] = mas1[i];
		}
		if (mas2[i] > 0) {
			rezmas[ind++] = mas2[i];
		}
	}

	printf("\nRezmas: ");
	for (int i = 0; i < 2*size; i++) {
		printf("%i ", rezmas[i]);
	}

	return 0;
}