#include "main.h"
char *_strcat(char *dest, char *src)
{
    int dest_len = 0; // Track the length of dest
    int i;

    // Find the end of dest
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    // Append src to dest
    for (i = 0; src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
    }

    // Null-terminate the concatenated string
    dest[dest_len + i] = '\0';

	return (dest);
}
