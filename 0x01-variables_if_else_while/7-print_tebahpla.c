#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: always (success)
 */

int main(void)
{
char low;

for (low = 'z'; low >= 'a'; low--)
_putchar(low);
_putchar('\n');
return (0);
}
