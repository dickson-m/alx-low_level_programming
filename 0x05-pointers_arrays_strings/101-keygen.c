#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-the entrypoint
 * @num:store my random number
 * Return: 0
 */
int main(void)
{
int num;

srand(time(0));
num = rand();
printf("%i\n", num);
return (0);
}
