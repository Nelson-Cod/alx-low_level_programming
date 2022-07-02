#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char boy;
for (boy = 'z'; boy <= 'a'; boy--)
	putchar(boy);
putchar('\n');
return (0);
}
