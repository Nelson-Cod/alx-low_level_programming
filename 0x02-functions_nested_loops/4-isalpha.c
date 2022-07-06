#include "main.h"
/**
 * _isalpha - check if a character is lowercase or uppercase
 * @q: The character to be checked
 *
 * Return: 1 if character is lowercase or uppercase or 0 if else
 */
int _isalpha(int q)
{
if ((q >= 97 && q <= 122) || (q >= 65 && q <= 90))
	return (1);
else
	return (0);
}
