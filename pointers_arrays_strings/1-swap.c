/**
 *swap_int - updates the value to 98
 *@a: input
 *@b: input
 *
 */
#include "main.h"
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
