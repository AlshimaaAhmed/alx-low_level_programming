#include "main.h"
/**
 * swap_int - swaps two integers
 * Return: void
 * @a: the first integer
 * @b: the secound integer
 */
void swap_int(int *a, int *b)
{
int *tmp;
tmp = a;
a = b;
b = tmp;
}
