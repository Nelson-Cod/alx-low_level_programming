#include <stdio.h>
#include <stdlib>
#include <time.h>
/**
 * main - Prints single digits of base 10 starting from 0 and a new line
 *
 * Return: 0 if success
 */
int main(void)
{
char d = '0';
while (d <= '9')
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}
