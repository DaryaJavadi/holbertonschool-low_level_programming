#include <stdio.h>
#include <stdarg.h>
int findMax(int count, ...)
{
	va_list args;
	va_start(args, count);
	int max = va_arg(args, int);
	for (int i = 1; i < count; i++)
	{
	int num = va_arg(args, int);
	if (num > max)
	{
		max = num;
	}
	}   
	va_end(args);
	return (max);
}

int main()
{
	printf("Max of 45, 55, 23, 32, 11: %d\n", findMax(5, 45, 55, 23, 32, 11));
	printf("Max of 3, 6, 2, 87, 23: %d\n", findMax(5, 3, 6, 2, 87, 23));
	printf("Max of 11, 22, 33: %d\n", findMax(3, 11, 22, 33));
	return (0);
}
