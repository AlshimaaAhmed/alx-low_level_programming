#include<stdlib.h>
#include<stdio.h>
#include "main.h"
/**
 * main -print the file name
 * @argc: the number of arguments
 * @argv:the array of arguments
 * Return:success always (0)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
