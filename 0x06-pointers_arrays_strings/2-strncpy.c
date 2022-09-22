#include "main.h"
/**
 * _strncpy- function copies the string pointed to by src, including ('\0')
 *
 * @dest: buffer storing the string copy
 *
 * @src:the source string
 *
 * @n:max nummber of byte copied
 *
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
