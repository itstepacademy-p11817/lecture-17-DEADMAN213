#include <stdio.h>
#include <stdbool.h>

int main(void) {
	short mas[8] = { 1, 8, 4, 2, 0, 9, 5, 7 };
	short rez[2][2] = { 0 };
	short size = 10;
	short ind = 0;
	bool flag = true;

	printf("Massive: ");
	for (int i = 0; i < size - 2; i++) {
		printf("%i ", mas[i]);
	}

	for (short i = 0; i < size - 3; i++) {
		flag = false;
		ind = 0;
		for (short k = 0; k < 2; k++) {
			rez[k][0] = 0;
			rez[k][1] = 0;
		}

		for (short j = 0; j < size - 3; j++) {
			if (mas[j] > mas[j + 1]) {
				short box = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = box;
				flag = true;
			}

			if (mas[j] < mas[j + 1] && mas[j + 1] - mas[j] > 1) {
				rez[ind][0] = mas[j];
				rez[ind++][1] = mas[j + 1];

				if (ind == 2) {
					ind = 0;
				}
			}
		}

		if (!flag) {
			break;
		}
	}

	if (mas[0] > 0) {
		rez[ind][0] = -1;
		rez[ind++][1] = mas[0];
	}

	if (mas[size - 3] < 9) {
		rez[ind][0] = mas[size - 3];
		rez[ind++][1] = 10;
	}

	if (ind == 0) {
		ind = 2;
	}

	printf("\nElements: ");
	for (short i = 0; i < ind; i++) {
		for (short j = rez[i][0] + 1; j < rez[i][1]; j++) {
			printf("%i ", j);
		}
	}
	printf("\n");

	return 0;
}