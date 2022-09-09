#include <stdio.h>

/**
 * main- entry oint
 *
 * Description- using the main function
 *
 * This program prints alphabeth in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	/*Character is noted as c*/
for (c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
