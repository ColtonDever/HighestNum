#include <stdio.h>

void find_array_maxes(int *, int);

int main(void) {
	int funarray[] = {4, 7, 2, 6, 54, 78, 95, 12, 51, 85};
	int num_elements = sizeof(funarray) / sizeof(int);
	find_array_maxes(funarray, num_elements);
	return 0;
}

void find_array_maxes(int *array, int size) {
	int largest = array[0];
	int second_largest = array[0];
	for (int i = 1; i < size; i++) {
		if (largest < array[i])
			largest = array[i];
	}
	printf("Largest Number:\t%d\n", largest);

	for (int i = 1; i < size; i++) {
		if (array[i] == largest)
			continue;
		if (second_largest < array[i])
			second_largest = array[i];
	}
	printf("Second Largest Number:\t%d\n", second_largest);
}
