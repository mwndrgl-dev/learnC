#include <stdio.h>

int main()
{
	int score;

	printf("Enter your test score: ");
	scanf("%d", &score);

	if (score >= 50 && score <= 100)
	{
		printf("Pass!\n");
	}

	else if (score < 50 && score >= 0)
	{
		printf("Fail!\n");
	}

	else if (score < 0)
	{
		printf("Invalid score.\n");
	}
	else
	{
		printf("Invalid score.\n");
	}

	return 0;
}
