#include <stdio.h>
/**
 * main - This is a description
 * Return: int will be returned
 */
int main(void)
{
  char i;
  for(i = '0'; i <= '9' ; i++){
    putchar(i);
    putchar(',');
    putchar(' ');
  }

  putchar('\n');
  return (0);
}
