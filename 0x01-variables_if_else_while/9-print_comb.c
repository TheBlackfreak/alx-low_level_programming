#include <stdio.h>
/**
 * main- entry point
 *
 * Description- using main function
 *
 * This program prints a combnation of single digits seperated with a space
 *
 * Return: 0
 */
int main(void)
{
	int c;
for (c = '0'; c <= '9'; c++)
{
	putchar(c);

if (c != '9')
{
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');
return (0);
}

