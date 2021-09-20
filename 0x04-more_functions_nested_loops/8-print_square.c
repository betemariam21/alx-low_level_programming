#include "main.h"

void print_line(int n)
{
int i,j;

j=1;
if (n > 0)
{
while (j <= n)
{
for(i = 1; i <= n; i++)
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
