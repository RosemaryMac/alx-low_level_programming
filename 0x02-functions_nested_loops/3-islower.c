#include "main.h"
/**
 * _islower - Check main
 * @c: An input character to be checked
 * Return: 1 if is lowercase or 0 if uppercase
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
