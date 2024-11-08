/**
 * main - prints out all of the arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int add = 0, i = 0, j = 0;
	if (argc == 1)
	{
	printf("0\n");
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
	while (argv[i][j] != '\0')
	{
	if (argv[i][j] < '0' || argv[i][j] > '9')
	{
	printf("Error\n");
	return (1);
	}
	j++;
	}
	j = 0;
	}
	for (i = 1; i < argc; i++)
	{
	add += atoi(argv[i]);
	}
	printf("%d\n", add);
	}
	return (0);
}
