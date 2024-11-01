/**
 *strlen - calculate the len of string
 *@s: string
 *
 */
#include <stdio.h>
#include <string.h>
#include "main.h"
int _strlen(char *s)
{
	int len;
	
	for (len = 0; *s != '\0'; s++)
		len++;
	return(len);
}
