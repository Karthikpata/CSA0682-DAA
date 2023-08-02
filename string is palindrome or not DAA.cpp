#include <stdio.h>
#include <string.h>

int main()
{
	char str[5];
	printf("Enter String (upto 5 characters length): ");
	scanf("%s", str);

	int strSize = strlen(str);
	if (strSize > 5) {
		printf("\nError: strSize should be less than 20 "
			"characters.");
		return 0;
	}

	char strReversed[5];
	for (int i = strSize - 1; i >= 0; --i) {
		strReversed[strSize - 1 - i] = str[i];
	}

	if (strcmp(str, strReversed) == 0) {
		printf("\n%s is a palindrome", str);
	}
	else {
		printf("\n%s is not a palindrome", str);
	}
	return 0;
}

