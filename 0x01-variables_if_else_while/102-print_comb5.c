#include<stdio.h>

/**
 * main - my project entry point that prints all combinations of two digits with,
 * and space followed and new line
 *
 * Return: returns 0 when all is working well
 *
 */

int main(void)
{
	int dig1, dig2;
	for(dig1=0;dig1<=98;dig++)
	{

	for(dig2=dig1+1; dig2<=99; dig2++)
	{
		putchar((dig1/10)+'0');
		putchar((dig1%10)+'0');
		putchar(32);
		putchar((dig2/10)+'0');
		putchar((dig2%10)+'0');
		if (dig1/10!=9 ||dig1%10!=8)
		{
			putchar(44);
			putchar(32);
		}
	}
	}
	putchar(10);
	return (0);
}
