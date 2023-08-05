#include "main.h"
/**
 * factorial - return the factorial of the number
 * @n: the number that wlii git his factorial
 * Return: the fuctorial of the number
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (1);
}
if (n > 1)
{
return (n * factorial(n - 1));
}
return (0);
}
