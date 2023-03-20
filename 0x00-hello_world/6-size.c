#include <stdio.h>
/**
  * * main - A program prints the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	char x;
	int y;
	long long int z;
	float F;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(F));
return (0);
}
