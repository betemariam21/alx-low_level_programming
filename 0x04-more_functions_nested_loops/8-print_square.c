#include "main.h"

void print_square(int size)
{
int i,j;

j=1;
if (size > 0)
{
while (j <= size)
{
for(i = 1; i <= size; i++)
{
_putchar('#');
}
_putchar('\n');
j++;
}
}
else
{
_putchar('\n');
}
}
