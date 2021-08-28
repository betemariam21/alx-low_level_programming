#include<stdio.h>
/**
 * main - This is a description
 * Return: int will be returned
 */
int main(void)
{
int intType;
float floatType;
long int longint;
long long int longlongint;
double doubleType;
char charType;

printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longint));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongint));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
