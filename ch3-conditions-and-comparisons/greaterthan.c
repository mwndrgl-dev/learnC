#include <stdio.h>

int main()
{
	int a;
	int b;
	
	printf("Enter 1st integer: ");
	scanf("%d", &a);

	printf("Enter 2nd integer: ");
	scanf("%d", &b);

	if (a > b)
        {
		printf("%d is greater than %d\n", a, b);
	}
	
	else if (a == b)
	{
		printf("%d is equal to %d\n", a, b);
	}
	else
	{
		printf("%d is greater than %d\n", b, a);
	}
	return 0;
}
