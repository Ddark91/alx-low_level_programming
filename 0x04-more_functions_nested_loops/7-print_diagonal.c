#include "main.h"

/**
 * print_diagonal -> print line
 * @n:integer param
 * Return: 0
 */

void print_diagonal(int n)
{
int x;

if (n <= 0)
_putchar('\n');
else
{
for (x = 0; x < n; x++)
{
	for (i = 0; i <= x; i++)
		putchar(' ');
_putchar(92);
_putchar('\n');
}
}
}
