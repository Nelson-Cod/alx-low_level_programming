#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints all single digits of base 10 starting with 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
for (ch = 0; ch < 10; ch++)
putchar((ch % 10) + '0');
putchar('\n');
return (0);
}
