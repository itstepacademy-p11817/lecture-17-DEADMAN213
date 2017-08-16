#include <stdio.h>
#include <stdbool.h>

void swapElems(int mas[], int size) {
	for (int i = 0; i < size - 1; i++) {
		if (mas[i] > mas[i + 1]) {
			int box = mas[i];
			mas[i] = mas[i + 1];
			mas[i + 1] = box;
		}
	}
}

int main(void) {
	int mas[5] = {4, 2, 11, 4, 60};
	int size = 5;
	
	printf("In mas: ");
	for (int i = 0; i < size; i++) {
		printf("%i ", mas[i]);
	}

	swapElems(mas, size);

	printf("\nOut mas: ");
	for (int i = 0; i < size; i++) {
		printf("%i ", mas[i]);
	}
	printf("\n: ");

	return 0;
}