#include "main.h"

/**
 * print_times_table - prints times table for numbers from 0-14
 * @n: An input integer value
 * Return: Nothing
 */
void print_times_table(int n)
{
int i, j, r;
if (n > 0 && n < 15)
{
for (i = 0; i <= n; i++)
{
_putchar(48);
for (j = 1; j <= n; j++)
{
r = j * i;
_putchar(44);
_putchar(32);
if (r > 9)
{
_putchar(32);
_putchar(32);
_putchar(j + 48);
}
else if (j <= 99)
{
_putchar(32);
_putchar((j / 10) + 48);
_putchar((j % 10) + 48);
}
else
{
_putchar(((j / 10) % 10) + 48);
_putchar(((j / 10) % 10) + 48);
_putchar((j % 10) + 48);
}
}
_putchar ('\n');
}
}
}
