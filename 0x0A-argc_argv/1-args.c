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
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
