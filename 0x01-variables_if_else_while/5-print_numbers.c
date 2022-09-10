#include <stdio.h>
/**
 * main- entry point
 *
 * Description- using the main function
 *
 * This program prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;
	/*n is a variable to which the digits are assigined*/
for (n = '0'; n <= '9'; n++)
{
	putchar(n);
}
	putchar('\n');
return (0);
}
