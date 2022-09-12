#include <stdio.h>

/**
 *
 *  main - my project entry point
 *
 * Return: returns 0 when everything works well
 *
 *
*/

int main(void)
{
	int l, l1;

	for (l = 48; l <= 56; l++)
	{
		for (l1 = l + 1; l1 <= 57; l1++)
		{
			putchar(l);
			putchar(l1);
			if (l != 56 || l1 != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
