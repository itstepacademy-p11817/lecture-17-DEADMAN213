#include <stdio.h>
#include <stdbool.h>

int main(void) {
	short mas[8] = { 0, 6, 8, 3, 2, 7, 4, 9 };
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
		for (short k = 0; k < 2; k++) {
			rez[k][0] = 0;
			rez[k][1] = 0;
		}

		for (short j = 0; j < size - 3; j++) {
			if (mas[j] < mas[j + 1] && mas[j + 1] - mas[j] > 1) {
				rez[ind][0] = mas[j];
				rez[ind++][1] = mas[j + 1];

				if (ind == 2) {
					ind = 0;
				}
			}

			if (mas[j] > mas[j + 1]) {
				short box = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = box;
				flag = true;
			}
		}

		if (!flag) {
			if (mas[size - 3] != size - 1) {
				rez[1][0] = mas[size - 3];
				rez[1][1] = 10;
			}

			if (mas[0] != 0) {
				rez[0][0] = -1;
				rez[0][1] = mas[0];
			}

			break;
		}
	}

	printf("\nElements: ");
	for (short i = rez[0][0] + 1; i < rez[0][1]; i++) {
		printf("%i ", i);
	}
	for (short i = rez[1][0] + 1; i < rez[1][1]; i++) {
		printf("%i \n", i);
	}

	return 0;
}