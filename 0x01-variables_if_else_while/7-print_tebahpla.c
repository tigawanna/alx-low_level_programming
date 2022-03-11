#include <stdio.h>

/**
 * main - Print out reverse alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}

return (0);
}
