#include "main.h"
/**
 * reverse_array - reverse an arry of integers
 * @a : input array
 * @n : the numbers of character in array
 * Return : void
 */
void reverse_array(int *a, int n)
{
int i, t, j;
j = n - 1;
for (i = 0; i < n; i++)
{
t = a[i];
a[i] = a[j];
a[j] = t;
j--;
}
}
