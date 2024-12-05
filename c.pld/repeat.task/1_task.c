#include <stdio.h>

int add(int a, int b)
{
	return (a + b);
}

int subtract(int a, int b)
{
	return (a - b);
}

int multiply(int a, int b)
{
	return (a * b);
}

int divide(int a, int b)
{
	if (b == 0)
	{
	printf("Error! Can't devide by zero\n");
	return (0);
	}
	return (a / b);
}

int main()
{
	int (*operations[4])(int, int) = {add, subtract, multiply, divide};

	int x = 10, y = 5;

	printf("Addition: %d\n", operations[0](x, y));
	printf("Subtraction: %d\n", operations[1](x, y));
	printf("Multiplication: %d\n", operations[2](x, y));
	printf("Division: %d\n", operations[3](x, y));

	return (0);
}
