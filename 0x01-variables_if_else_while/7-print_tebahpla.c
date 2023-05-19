#include <stdio.h>

/**
 * main - my project entry point
 * int l - itaration variable
 * Return: returns 0 when everything works well
*/

int main(void)
{
	int l;

	for (l = 122; l >= 97; --l)
	{
		putchar(l);
	}
	putchar(10);
	return (0);
}
