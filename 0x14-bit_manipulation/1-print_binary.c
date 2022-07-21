#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int count = 0;
	unsigned long int i;

	for (i = 1 << 63; i > 0; i = i / 2)
	{
		(n & i) ? _putchar("1") : _putchar("0");
	}

	if (!count)
		_putchar('0');
	}

