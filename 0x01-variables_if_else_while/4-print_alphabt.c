#include <stdio.h>

/**
 * main - project entry point
 *
 * Return: returns 0 when everything works well
 *
*/

int main(void)
{
	int l;

	for (l = 97; l <= 122; ++l)
	{
		if (l != 101 && l != 113)
		{
			putchar(l);
		}
	}
	putchar(10);
	return (0);
}
