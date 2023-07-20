#include "main.h"
/**
 * _isupper - check if the letter is in uppercase
 * @c:the letter that checked
 * Return: 1 (success)
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
