#include <stdio.h>
#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
if (argc > 3 || argc < 3)
{
printf("Error\n");
return (1);
}
num1 = (int) argv[1];
num2 = (int) argv[2];
result = num1 * num2;
printf("%d\n", result);
return (0);
}

