#include "main.h"
/**
 * print_last _digit - prints the last digit of every given number.
 * @n: The number in question.
 *
 * Return: Value of the last digit of a given number.
 */
int print_last_digit(int n)
{
int last_digit = n % 10;
if (last_digit < 0)
	last_digit *= -1;
_putchar(last_digit + '0');
return (last_digit);
}
