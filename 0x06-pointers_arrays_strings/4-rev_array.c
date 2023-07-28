#include "main.h"
/**
 * reverse_array - reverse an arry of integers
 * @a : input array
 * @n : the numbers of character in array
 * Return : void
 */
void reverse_array(int *a, int n)
{
int b[100];
int i;
int j = n - 1;
for (i = 0; i < n; i++)
{
b[i] = a[j];
j--;
}
j = 0;
for (i = 0; i < n; i++)
{
a[i] = b[j];
j++;
}
