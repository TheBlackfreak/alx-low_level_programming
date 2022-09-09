#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: using the main function
 *
 * This program displays whether the integer is positive(>0), zero(=0), or negative(<0)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*Check if n is greater than 0 */
if (n > 0) 
{
	/*If true then print the following*/
	printf("%i is positive\n", n);
}
else if (n == 0) 
{
	/*If true the print the following*/
	printf("%i is zero\n", n);
}
else if (n < 0) 
{
	/*If true print the following*/
	printf("%i is negative\n", n);
}
	return (0);
}
