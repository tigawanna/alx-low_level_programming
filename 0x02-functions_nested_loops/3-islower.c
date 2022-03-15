#include "main.h"
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
