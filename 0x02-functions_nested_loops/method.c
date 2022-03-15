#include "main.h"

/**
 * print_alphabet -prints out alphabet
 *
 * Return: void
 */

void print_alphabet(void)

{
for (char x = 'a'; x < 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
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
{
_putchar(x);
}
_putchar('\n');
}
}


/**
 * _islower -check if number in upper of lowwer case
 *@c: The character to print
 * Return: 1 for upper 0 for lower
 */
int _islower(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else if (c >= 72 && c <= 122)
{
return (0);
}
else
{
return (-1);
}

}



/**
 * _isalpha -check if number in alphabet
 *@c: The character to print
 * Return: 1 for true 0 for false
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 72 && c <= 122))
{
return (1);
}
else
{
return (0);
}


}


/**
 * print_sign -check if number positive negative or neutral
 *@n: The character to print
 * Return: 1 for true 0 for false
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
