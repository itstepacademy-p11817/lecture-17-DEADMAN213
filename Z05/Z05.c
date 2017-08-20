#include <stdio.h>
#include <stdbool.h>

void swapElems(int mas[], int size) {
	for (int i = 0; i < size - 1; i++) {
		bool flag = true;

		for (int j = 0; j < size - 1 - i; j++) {
			if (mas[j] > mas[j + 1]) {
				int box = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = box;
				flag = false;
			}
		}

		if (flag) {
			break;
		}
	}
}

int main(void) {
	int mas[5] = { 60, 11, 2, 4, 3 };
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