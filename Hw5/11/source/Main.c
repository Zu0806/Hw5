#include <stdio.h>

int recursiveMaximum(const int array[], int size);

int main() {
	int numbers[] = { 12, 7, 15, 23, 9, 17, 31, 5, 8 };
	int size = sizeof(numbers) / sizeof(numbers[0]);

	int max = recursiveMaximum(numbers, size);

	printf("The maximum value in the array is: %d\n", max);
	system("pause");
	return 0;
}

int recursiveMaximum(const int array[], int size) {
	// Base case: stop processing when the array has only one element
	if (size == 1) {
		return array[0];
	}

	// Recursive case: find the maximum in the rest of the array
	int maxRest = recursiveMaximum(array + 1, size - 1);

	// Compare the maximum in the rest with the current element
	return (array[0] > maxRest) ? array[0] : maxRest;
}
