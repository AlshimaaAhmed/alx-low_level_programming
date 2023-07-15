#include <stdio.h>
/**
 * main - outputing the size of data types
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
int b;
long c;
long long d;
float e;
printf("Size of a char: %d byte(s)\n", sizeof(a));
printf("Size of a int: %d byte(s)\n", sizeof(b));
printf("Size of a long int: %d byte(s)\n", sizeof(c));
printf("Size of a long long int: %d byte(s)\n", sizeof(d));
printf("Size of a float: %d byte(s)\n", sizeof(e));
}
