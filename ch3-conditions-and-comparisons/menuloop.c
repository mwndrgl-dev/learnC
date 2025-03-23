#include <stdio.h>

int main ()
{
	int menu = 0;

	do 
	{
		printf("1. Say Hello\n");
		printf("2. Say Goodbye\n");
		printf("3. Exit\n");
		printf("Please enter your choice: \n");
		scanf("%d", &menu); 
	
		if (menu == 1)
		{
			printf("Hello! \n");
		}

		else if (menu == 2)
		{
			printf("Goodbye! \n");
		}
		else if (menu == 3)
		{
			printf("Exiting program\n");
		}
	}
	while (menu != 3);	
	return 0;
}
