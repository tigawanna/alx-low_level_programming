#include "main.h"

/**
 * print_alphabet_x10 -prints out alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
for (int x = 0; x < 10; x++)
{
for (char x = 'a'; x < 'z'; x++)
_putchar(x);

_putchar('\n');
}
}
