#include "main.h"
/**
 * main - prints _putchar
 *
 * Return: always(0)
 */
int main()
{
  char c[9] = "_putchar";
  int i;
  
  for(i =0 ; i<9 ; i++)
  {
  _putchar(c[i]);

  }
  _putchar('\n');  
  return (0);
  }

