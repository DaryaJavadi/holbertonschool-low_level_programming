#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *                 the alphabet a - z
 */

void print_alphabet(void) {
    for (char ch = 'a'; ch <= 'z'; ch++) {
        _putchar(ch);
    }
    _putchar('\n');
}

void print_alphabet_x10(void) {
    for (int i = 0; i < 10; i++)
        print_alphabet();
    }
}
