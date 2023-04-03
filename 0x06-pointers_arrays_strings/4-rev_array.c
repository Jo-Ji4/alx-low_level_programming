#include "main.h"

/**
 * reverse_array - reverse an array.
 * @a: array.
 * @n: array's length.
 */

void reverse_array(int *a, int n)
{
	int x, y, tmp;

	y = n - 1;
	for (x = 0; x < n / 2; x++)
	{
		tmp = a[x];
		a[x] = a[y];
		a[y] = tmp;
		y--;
	}
}
