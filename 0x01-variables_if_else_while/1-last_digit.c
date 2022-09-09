#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main- entry point
 *
 * Description- using the main function
 *
 * This program says if n is >5, =0, or <6.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char last[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*Checks the value of n and print accordingly*/
	printf("%s %d is %d and is", last, n, n % 10);
if (n % 10 > 5)
{
	/*If true then print the following*/
	printf("greater than 5\n");
}
else if (n % 10 == 0)
{
	/*If true then print the following*/
	printf("0\n");
}
else if (n % 10 < 6 && n % 10 != 0)
{
	/*If true then print the following*/
	printf("less than 6 and not 0\n");
}
	return (0);
}
