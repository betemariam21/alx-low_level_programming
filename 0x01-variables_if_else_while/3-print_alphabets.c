#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This is a description
 * Return: int will be returned
 */
int main(void)
{
  char be = 'a';
  char bee = '\n';
  char beta = 'A';

  for (be = 'a'; be <= 'z'; be++)
    {
      putchar(be);
    }
  for(beta = 'A'; beta <= 'Z'; beta++ )
    putchar(beta);

  putchar(bee);
  return (0);
}
