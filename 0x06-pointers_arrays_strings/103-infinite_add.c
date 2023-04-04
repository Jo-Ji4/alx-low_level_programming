#include "main.h"

/**
 * infinity_add - add 2 numbers.
 *
 * @n1: first number.
 * @n2: second number.
 * @r: result.
 * @size_r: result size.
 * Return: the addition of n1 and n2.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int add = 0, l1, l2, x, y;

	for (l1 = 0; n1[l1]; l1++)
	;
	for (l2 = 0; n2[l2]; l2++)
	;
	if (l1 > size_r || l2 > size_r)
	return (0);
	l1--;
	l2--;
	size_r--;
	for (x = 0; x < size_r; x++, l1--, l2--)
	{
		if (l1 >= 0)
			add += n1[l1] - '0';
		if (l2 >= 0)
			add += n2[l2] - '0';
		if (l1 < 0 && l2 < 0 && add == 0)
			break;
		r[x] = add % 10 + '0';
		add /= 10;
	}
	r[x] = '\0';
	if (l1 >= 0 || l2 >= 0 || add)
		return (0);
	for (x--, y = 0; x > y; x--, y++)
	{
		add = r[x];
		r[x] = r[y];
		r[y] = add;
	}
	return (r);
}
