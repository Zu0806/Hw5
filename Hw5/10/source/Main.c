#include <stdio.h>

void stringReverse(const char str[]);

int main() {
	char inputString[] = "Hello, World!";

	printf("Original string: %s\n", inputString);

	printf("Reversed string: ");
	stringReverse(inputString);

	return 0;
}

void stringReverse(const char str[]) {
	// Base case: stop processing when the null character is encountered
	if (*str == '\0') {
		return;
	}

	// Recursive case: print the rest of the string in reverse
	stringReverse(str + 1);

	// Print the current character
	printf("%c", *str);
}
