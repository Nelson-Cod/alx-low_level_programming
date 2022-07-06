#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int tow = 0;
char alpha;
while (tow++ <= 9)
{
for (alpha = 97; alpha <= 122; alpha++)
	_putchar(alpha);
_putchar('\n');
}
}
