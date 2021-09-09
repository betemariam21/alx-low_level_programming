#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: return value of last digit
 */
void jack_bauer(void)
{
int h,m;
	
for (h = 0; h < 24; h++)
{
for (m = 0; m < 60; m++)
{
printf("%02d:%02d",h,m);
printf("\n");
}
}
}
