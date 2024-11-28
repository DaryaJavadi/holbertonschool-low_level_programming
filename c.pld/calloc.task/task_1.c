#include <stdlib.h>
#include <stdio.h>
char* allocateString(int size)
{
	if (size <= 0)
	{
		return (NULL);
	}
	char *arr = (char*)calloc(size, sizeof(int));
	if (arr == NULL)
	{
		printf("Memory allocation is failed");
		return (NULL);
	}
	return (arr);
}

int main()
{
	int size = 100;
	char *str = allocateString(size);
	
	if (str == NULL)
	{
		printf("Failed to allocate memory.\n");
		return 1;
	}
	printf("Memory allocated successfully.\n");
	free(str);
	return 0;
}

