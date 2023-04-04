#include <stdio.h>

int main(void)
{
	int x;
	int n[5];
	int *p;

	n[2] = 1024;
	p = &n;
       	/*
	* write your line of code here...
	* Remember:
	* - you can not use a
	* - you can not modify p
	* - one statement only
	* - you can not code anything else than this line of code
	*/
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("n[2] = %d\n", n[2]);
	return (0);
}
