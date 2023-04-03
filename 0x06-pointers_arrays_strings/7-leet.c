#include "main.h"

/**
 * leet - uncoding a string in to 1337.
 * @s: string to encode.
 * Return: the encoded string.
 */

char *leet(char *s)
{
	int x = 0, y = 0;
	char array_leet[] = {'4', '3', '1', '0', '7'};
	char array_up[] = {'A', 'E', 'L', 'O', 'T'};
	char array_low[] = {'a', 'e', 'l', 'o', 't'};

	while (s[x] != '\0')
	{
		for (y = 0; y < 5; y++)
		{
			if (s[x] == array_low[y] || s[x] == array_up[y])
				s[x] = array_leet[y];
		}
		x++;
	}

	return (s);
}
