#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *findCharacterOccurrences(char *str, char c)
{
    int i = 0;
    
    if (str == NULL)
	{
		return (NULL);
	}
	
    while (*str != '\0')
	{
	    if (*str == c)
	    {
	        printf("Character '%c' is at %d\n", c, i);
        }
        *str++;
        i++;
    }
    if (*str != c)
        {
        printf("Character not found in the string.");
        }
}
int main()
{
    char string[] = "Hello, world!";
    char target = 'o';

    findCharacterOccurrences(string, target);
    return (0);
}
