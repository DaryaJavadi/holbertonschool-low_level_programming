#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("No arguments provided.\n");
    return (0);
    }
    int i, len;
    for (i = 1; i < argc; i++)
    {
        char *str = argv[i];
        len = strlen(str);
        printf("String: %s, Length: %d\n", str, len);
    }
    return (0);
}
