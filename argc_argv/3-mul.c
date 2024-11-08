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
	int res1, res2;

	res1 = res2 = 0;
	if (argc > 2)
	{
		res1 = atoi(argv[1]);
		res2 = atoi(argv[2]);
		printf("%d\n", res1 * res2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
