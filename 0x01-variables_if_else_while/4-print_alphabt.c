#include <stdio.h>
/**
 * main- entry point
 *
 * Description- using the main function
 *
 * This program writes all the alphabeth except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	/*c is an acronym for character*/
for (c = 'a'; c <= 'z'; c++)
{
	if (c != 'e' && c != 'q')
	{
		putchar(c);
	}
}
	putchar('\n');
return (0);
}
