#include<stdlib.h>
#include<stdio.h>
#include "main.h"
/**
 * main -print the namber of arguments
 * @argc: the number of arguments
 * @argv:the array of arguments
 * Return:success always (0)
 */
int main(int argc, char *argv[])
{
int i;
int result = 1; /*the multiblication result*/
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
for (i = 1; i < 3; i++)
{
result *= atoi(argv[i]);
}
printf("%d\n", result);
}
return (0);
}
