#include "main.h"
/**
 * print_to_98 - prints to 98
 * @n: number to start from
 * Return: 0 or 1
 */
void print_to_98(int n)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
while (n > 98)
{
printf("%d, ", n);
n--;
}
printf("98");
putchar('\n');
}
