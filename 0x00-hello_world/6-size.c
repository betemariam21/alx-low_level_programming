#cription
* Return: int will be returned
 */
int main()
{
  int intType;
  float floatType;
  long int longint;
  long long int longlongint;
  double doubleType;
  char charType;


  printf("Size of char: %zu byte\n", sizeof(charType));
  printf("Size of int: %zu bytes\n", sizeof(intType));
  printf("Size of long int: %zu bytes\n", sizeof(longint));
  printf("Size of long long int: %zu bytes\n", sizeof(longlongint));
  printf("Size of float: %zu bytes\n", sizeof(floatType));
  return 0;
}
