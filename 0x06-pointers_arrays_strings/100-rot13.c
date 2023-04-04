#include "main.h"

/**
 * rot13 - uncoding a string by rot13.
 * @s: the string to be encoded to rot13.
 * Return: the string s encoded to rot13.
 */

char *rot13(char *s)
{
	int x = 0, y = 0;
	char string_rot13[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	char string_alpha[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

	while (s[x] != '\0')
	{
		do {
			if (s[x] == string_alpha[y])
			{
				s[x] = string_rot13[y];
				break;
			}
			y++;
		} while (string_alpha[y] != '\0');
		x = 0;
		y++;
	}

	return (s);
}
