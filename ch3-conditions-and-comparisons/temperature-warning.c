#include <stdio.h>

int main() 
{
	int temp;

	printf("Enter the current temperature (Celsius): ");
	scanf("%d", &temp);

	if (temp < 0)
	{
		printf("Freezing warning!\n");
	}

	else if (temp >= 0 && temp <= 30)
	{
		printf("Normal temperature.\n");
	}

	else 
	{
		printf("Heat warning!\n");
	}
	
	return 0;
}
