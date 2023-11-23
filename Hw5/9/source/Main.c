#include <stdio.h>
#define SIZE 15

int binarySearch(const int array[], int low, int high, int key);

int main() {
	int a[SIZE] = { 0, 2, 4, 5, 7, 9, 12, 15, 18, 21, 25, 27, 30, 32, 35 };
	int searchKey, result;

	printf("Enter an integer search key: ");
	scanf("%d", &searchKey);

	// Perform binary search
	result = binarySearch(a, 0, SIZE - 1, searchKey);

	// Display the result
	if (result != -1) {
		printf("Key %d found at index %d.\n", searchKey, result);
	}
	else {
		printf("Key %d not found.\n", searchKey);
	}

	return 0;
}

int binarySearch(const int array[], int low, int high, int key) {
	if (low <= high) {
		int mid = (low + high) / 2;

		if (key == array[mid]) {
			return mid;  // Key found
		}
		else if (key < array[mid]) {
			return binarySearch(array, low, mid - 1, key);  // Search in the left half
		}
		else {
			return binarySearch(array, mid + 1, high, key);  // Search in the right half
		}
	}

	return -1;  // Key not found
}
