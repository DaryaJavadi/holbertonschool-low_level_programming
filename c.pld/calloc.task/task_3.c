#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...)
{
	va_list args;
	int total = 0;

	va_start(args, count);

	for (int i = 0; i < count; i++)
	{
	total += va_arg(args, int);
	}

	va_end(args);

    return total;
}

int main()
{
	int result1 = sum(2, 10, 20);
	int result2 = sum(3, 1, 2, 3);
	int result3 = sum(5, 5, 10, 15, 20, 25);

	printf("Sum of 2 numbers (10 + 20): %d\n", result1);
	printf("Sum of 3 numbers (1 + 2 + 3): %d\n", result2);
	printf("Sum of 5 numbers (5 + 10 + 15 + 20 + 25): %d\n", result3);

	return 0;
}
