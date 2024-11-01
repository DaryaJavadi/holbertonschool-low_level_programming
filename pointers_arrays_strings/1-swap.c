/**
 *swap_int - updates the value to 98
 *@temp: for temporary saving
 *
 */
#include "main.h"
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
