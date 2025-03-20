/* hash include of the standard input output library that contains printf command */
#include <stdio.h>

/* void returns a void, main is the first function read by a C program, second void is a placeholder for the arguments */
void main (void)

/* Bracket is the beginning of the function */
	{
	/* first three lines are declaring variables a b and c and saying they are integer values */
		int a;
	/* this line is both an initialisation and a declaration,  we are storing the value 3 as an integer inside the b variable, other variables have no declaration and are by default 0  */
		int b = 3;
		int c;

	/* here we are storing the integer value 2 inside the a variable, this will hold until changed. We can only put integers, value can change but not it's type */
		a = 2;
	/* this line adds a to b and stores the value in c */
		c = a + b;
	/* %d is a format specifier used to output numbers in C, each %d is replaced by a decimal representation of the integer */
		printf ("The sum of adding %d and %d is %d\n", a, b, c);
	}
