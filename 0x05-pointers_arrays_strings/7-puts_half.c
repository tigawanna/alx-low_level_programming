#include "main.h"

/**
 * puts_half - print half the chars
 * @str: input char pointer
 * Return: void
 */

void puts_half(char *str)
{
int len, n, i;

len = 0;

while (str[len] != '\0')
{
len++;
}

if (len % 2 == 0)
{
int n = len / 2;
printf("even total items: %d n: %d ", len, n);
for (i = n; i < len; ++i)
{
_putchar(str[i]);
}
}
else
{
int n = ((len - 1) / 2);
printf("odd total items: %d n: %d ", len, n);
for (i = n; i <= len; i++)
{
_putchar(str[i - 1]);
}
}
_putchar('\n');
}
