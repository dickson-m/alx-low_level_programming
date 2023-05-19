#include <stdio.h>

/**
 * main - my entry point
 * l - iteration variable
 * Return: returns 0 when everything works well
*/
int main(void)
{
	int l;

	for (l = 0; l < 10; ++l)
	{
		printf("%d", l);
	}
	putchar(10);
	return (0);
}
