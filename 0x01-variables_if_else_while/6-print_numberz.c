#include <stdio.h>
/**
 * main- entry point
 *
 * Description- using main function
 *
 * This program prints numbers from 0-9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	/*n is an acronym for number*/
for (n = '0'; n <= '9'; n++)
{
	putchar(n);
}
	putchar('\n');
return (0);
}
