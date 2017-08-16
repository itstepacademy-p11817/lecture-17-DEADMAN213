#include <stdio.h>
#include <stdbool.h>

int main(void) {
	short mas[8] = { 8, 1, 5, 9, 0, 7, 4, 6 };
	short rez[2][2] = { 0 };
	short size = 10;
	short ind = 0;
	bool flag = true;

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
			break;
		}
	}

	if (rez[0][1] - rez[0][0] > 2) {
		for (short i = rez[0][0] + 1; i < rez[0][1]; i++) {
			printf("%i ", i);
		}
	}
	else if (rez[1][1] - rez[1][0] > 2) {
		for (short i = rez[1][0] + 1; i < rez[1][1]; i++) {
			printf("%i ", i);
		}
	}
	else {
		printf("%i ", rez[0][0] + 1);
		printf("%i \n", rez[1][0] + 1);
	}

	return 0;
}