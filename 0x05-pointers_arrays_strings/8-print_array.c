#include "main.h"
#include <stdio.h>
/**
 * print_array - print the arry elements
 * @a: the pointer that wil reserve the array
 * @n: the size of the array
 * Return: void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i != n - 1)
{
printf("%d, ", a[i]);
}
else
{
printf("%d", a[i]);
}
}
printf("\n");
}
