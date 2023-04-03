#include "main.h"

/**
 * _strcat - concatinate 2 strings.
 * @dest: first string.
 * @src: second string.
 * Return: string.
 */

char *_strcat(char *dest, char *src)
{
	int n = 0, x = 0;

	while (dest[n] != '\0')
		n++;

	while (src[x] != '\0')
	{
		dest[n] = src[x];
		n++;
		x++;
	}

	dest[n] = '\0';

	return (dest);
}
