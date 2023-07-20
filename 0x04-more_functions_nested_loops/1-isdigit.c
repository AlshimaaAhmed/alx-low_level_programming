#include "math.h"
/**
 * _isdigit - check if the character is digit or not
 * @c: the character that checked
 * Return: 1 (success)
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
