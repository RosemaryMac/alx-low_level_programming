#include "main.h"
/**
 * string_toupper - Changes all lowercase letters
 *                  of a string to uppercase.
 * @s: The string to be changed.
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *);
{
char *start = s;
while (*s)
{
if (*s >= 'a' && *s <= 'z')
*s -= 32;
s++;
}
return (start);
}
