/**
 * main - prints out all of the arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
#include "main.h"
#include <stdio.h>
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
