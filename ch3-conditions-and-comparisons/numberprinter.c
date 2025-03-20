#include <stdio.h>

int main()
{
	int n;
	int b = 1;

	printf("Enter a positive integer: \n");
	scanf("%d", &n);

	while (b <= n)
	{
		printf("%d", b);
		b++;
	}
	printf("\n");

return 0;
}
