#include <stdio.h>
#include <ctype.h>

/**
 * main - Prints alphabet letters in all cases with a new line
 *
 * Return: return 0
 */

int main(void)
{
	int l;

	for (l = 97; l <= 122; ++l)
		putchar(l);
	for (l = 60; l <= 90; ++l)
		putchar(l);
	putchar(10);
	return (0);

