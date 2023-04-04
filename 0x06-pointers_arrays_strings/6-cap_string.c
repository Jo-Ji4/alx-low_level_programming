#include "main.h"

/**
 * cap_string - making all words of a string capital.
 * @s: string to use.
 *
 * Return: string.
 */

char *cap_string(char *s)
{
	int x = 1, y, check;
	char a[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t', ' '};

	if (s[0] > 96 && s[0] < 123)
		s[0] -= 32;

	while (s[x] != '\0')
	{
		if (s[x] > 96 && s[x] < 123)
		{
			y = 0;
			check = 0;
			while (check == 0 && y < 13)
			{
				if (s[x - 1] == a[y])
				{
					check = 1;
				}
				y++;
			}
			if (check == 1)
			{
				s[x] -= 32;
			}
		}
		x++;
	}
	return (s);
}
