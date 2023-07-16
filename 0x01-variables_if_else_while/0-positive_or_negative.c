#include <stdlib.h>
#include <time.h>
/**
 * main -conditions
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
printf("%lu is zero\n", n);
if (n > 0)
printf("%lu is positive\n", n);
if (n < 0)
printf("%lu is negative\n", n);
return (0);
}
