#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int dice1, dice2, sum;
	int rollCounts[12] = { 0 };  // Initialize array to store counts

	// Seed the random number generator with the current time
	srand(time(NULL));

	// Simulate rolling the dice NUM_ROLLS times
	for (int i = 0; i < 36000; i++) {
		dice1 = 1 + rand() % 6;  // Random number between 1 and 6
		dice2 = 1 + rand() % 6;  // Random number between 1 and 6
		sum = dice1 + dice2;
		rollCounts[sum-2]++;
	}

	// Display the results in a table
	printf("Sum\tOccurrences\n");
	for (int i = 2; i <13; i++) {
		printf("%d\t%d\n", i, rollCounts[i-2]);
	}

	return 0;
}
