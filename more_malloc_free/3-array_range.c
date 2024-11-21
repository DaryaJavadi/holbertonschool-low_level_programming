/**
 * *array_range - array of integers
 * @min: min
 * @max: max
 * Return: array
 */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
	{
		return (NULL);
	}
	
	arr = malloc(sizeof(int) * (max - min + 1));
	
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
