#include <stdio.h>
#include <stdbool.h>

int isThree(int num) {
	int sum = 0;

	if (num < 10) {
		return num;
	}

	while (true) {
		sum += num % 10;
		num /= 10;

		if (num == 0 && sum > 10) {
			num = sum;
			sum = 0;
		}
		if (num == 0 && sum < 10) {
			break;
		}
	}

	return sum;
}

int main(void) {
	int mas[5] = { 34, 61, 456, 12, 3 };
	int size = 5;

	printf("Massive: ");
	for (int i = 0; i < size; i++) {
		printf("%i ", mas[i]);
	}

	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (isThree(mas[i]) % 3 == 0) {
			sum++;
		}
	}

	printf("\nNum of happy counts: %i\n", sum);

	return 0;
}