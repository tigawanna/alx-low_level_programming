#include "main.h"



/**
 * print_last_digit - prunt lats number
 *@c: The int to convert to absolute
 * Return: last
 */
int print_last_digit(int c)
{
if (c < 0)
{
int absVal = c + (c * -2);
return (absVal % 10);
}

else
return (c % 10);


}

