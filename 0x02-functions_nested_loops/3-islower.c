#include "main.h"
/**
 * _islower - check is a character is in a lowercase
 * @q: The character to be checked
 *
 * Return: 1 if character is lowercase, else 0
 */
int _islower(int q)
{
if (q >= 97 && q <= 122)
	return (1);
else
	return (0);
}
