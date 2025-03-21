#include <stdio.h>

int main ()
{
	int sum = 0;
	int input = 1;

	while (input != 0)
	{
		printf("Enter an integer to add to the sum or enter 0 to stop program: \n");
		scanf("%d", &input);
	      	sum = sum + input;
		printf("The current value is:  %d\n", sum);
	}
	return 0;
}
