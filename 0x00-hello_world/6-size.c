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

printf("Size of char: %zu byte(s)\n", sizeof(charType));
printf("Size of int: %zu bytes(s)\n", sizeof(intType));
printf("Size of long int: %zu bytes(s)\n", sizeof(longint));
printf("Size of long long int: %zu bytes(s)\n", sizeof(longlongint));
printf("Size of float: %zu bytes(s)\n", sizeof(floatType));
return (0);
}
