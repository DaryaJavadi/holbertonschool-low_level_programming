#include <stdio.h>
#include <stdlib.h>
int** createArray(int rows, int cols)
{
	int** array = malloc(rows * sizeof(int*));
	for (int i = 0; i < rows; i++)
	{
	array[i] = malloc(cols * sizeof(int));
	for (int j = 0; j < cols; j++)
	{
		array[i][j] = 0;
	}
	}
	return (array);
}

int main()
{
	int rows, cols;

	printf("Gimme Rows plssssssss: ");
	scanf("%d", &rows);
	printf("Gimme Columns plssssssss: ");
	scanf("%d", &cols);

	int** array = createArray(rows, cols);
	printf("Gimme elements plssss:\n");
	for (int i = 0; i < rows; i++)
	{
	for (int j = 0; j < cols; j++)
	{
	printf("[%d][%d]: ", i, j);
	scanf("%d", &array[i][j]);
	}
	}
	printf("\nMassive:\n");
	for (int i = 0; i < rows; i++)
	{
	for (int j = 0; j < cols; j++)
	{
		printf("%d ", array[i][j]);
	}
	printf("\n");
	}
	for (int i = 0; i < rows; i++)
	{
	free(array[i]);
	}
	free(array);
	return (0);
}
