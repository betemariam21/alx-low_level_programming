#include "main.h"
/**
 * print_sign - check the code
 *
 * Return: int.
 * @n: First operand
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
