# include "main.h"
/**
 * _pow_recursion - return x to thr power of y
 * @x: the base number
 * @y: the power value number
 * Return: x to the power of y
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (-1);
}
if (y > 0)
{
return (x * _pow_recursion(x, y - 1));
}
return (0);
}
