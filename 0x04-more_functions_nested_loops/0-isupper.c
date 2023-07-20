#include "main.h"
/**
 * _isupper - check if the letter is in uppercase
 * @c:the letter that checked
 * Return: 1 (success)
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else if (c >= 97 && c <= 122)
{
return (0);
}
}
