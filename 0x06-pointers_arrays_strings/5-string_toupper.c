#include "main.h"

/**
 * string_toupper - making all lc letters of a string to upc.
 * @s: string to modify.
 *
 * Return: s modified.
 */

char *string_toupper(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] > 96 && s[x] < 123)
		{
			s[x] -= 32;
		}
		x++;
	}

	return (s);
}
