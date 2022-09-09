#include <stdio.h>

/**
 * main- entry point
 *
 * Description- using the main function
 *
 * This program prints lowercase and uppercase of the alphabeth
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	/*c is used as an acronym for character*/
for (c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}
for (c = 'A'; c <= 'Z'; c++)
{
	putchar(c);
}
	putchar('\n');
return (0);
}
