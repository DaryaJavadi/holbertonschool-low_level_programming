/**
 *print_rev - print a string in reverse
 *@s: string
 */
#include "main.h"
void print_rev(char *s)
{
int count = 0;
while (s[count] != '\0')
{
	count++;
}
int i;
for (i = count - 1; i >= 0; i--)
{
	write (1, &s[i], 1);
}
write(1, "\n", 1);
}
