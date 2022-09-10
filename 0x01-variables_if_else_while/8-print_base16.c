#include <stdio.h>
/**
 * main- entry point
 *
 * Description- using the main function
 *
 * This program prints numbers of base 16/hexadecimal string
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
for (c = '0'; c <= '9'; c++)
{
	putchar(c);
}
for (c = 'a'; c <= 'f'; c++)
{
	putchar(c);
}
	putchar('\n');
return (0);
}
