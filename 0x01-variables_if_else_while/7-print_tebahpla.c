#include <stdio.h>
/**
 * main- entry point
 *
 * Descripton- using the main function
 *
 * This program prints the alphabeth backwards (z-a)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
for (c = 'z'; c >= 'a'; c--)
{
	putchar(c);
}
	putchar('\n');
return (0);
}
