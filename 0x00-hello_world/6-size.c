#include <stdio.h>
/**
 * main - A program prints the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	char x;
	int y;
	long long int z;
	float F;
printf("Size of a char: 1 byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a int: 4 byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long long int: 8 byte(s)\n", (unsigned long)sizeof(z));
printf("Size of a float: 4 byte(s)\n", (unsigned long)sizeof(F));
return (0);
}
