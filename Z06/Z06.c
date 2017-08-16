#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int mas[8] = { 9, 3, 8, 2, 5, 7, 4, 6 };
	int size = 10;
	int a = -1;

	printf("Massive: ");
	for (int i = 0; i < size - 2; i++) {
		printf("%i ", mas[i]);
	}

	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += i;
	}

	for (int i = 0; i < size - 2; i++) {
		sum -= mas[i];
	}

	for (int i = 0; i < sum; i++) {
		int count = 0;

		for (int j = 0; j < size - 2; j++) {
			if (mas[j] != i) {
				count++;
			}
		}
		if (count == size - 2) {
			a = i;
			break;
		}
	}

	printf("\nElements: %i %i\n", a, sum - a);

	return 0;
}