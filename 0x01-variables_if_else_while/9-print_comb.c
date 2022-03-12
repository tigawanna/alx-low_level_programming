#include <stdio.h>

/**
 * main - prints all single digit numbers of base
 * 10 starting from 0, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

for (n = 0;; n++)
{
putchar(n + '0');
putchar(44);
}
putchar('\n');
return (0);
}

