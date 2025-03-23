#include <stdio.h>

int main ()
{
	int number;
	int reversed = 0;

	printf("Enter a positive integer: ");
	scanf("%d", &number);

	while (number > 0)
	{
		int digit = number % 10;
		reversed = reversed * 10 + digit;
		number = number / 10;
	}
	printf("%d\n", reversed);
	printf("Done\n");
	
	return 0;
}
