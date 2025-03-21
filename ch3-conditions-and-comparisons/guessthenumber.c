#include <stdio.h>

int main ()
{
	int secret = 7;
	int guess = 0;

	do 
	{
		printf("Guess the secret number: \n");
		scanf("%d", &guess);
	}
	while (guess != secret);
	printf("You got it! Secret is %d\n", secret);
	return 0;
}
