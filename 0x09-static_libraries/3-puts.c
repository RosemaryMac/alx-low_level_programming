#include "main.h"
/**
 * _puts - Write a function that prints a string, followed
 * by a new line, to stdout.
 * @s: an input string
 * Return: Nothing
 */
void _puts(char *s)
{
  while (*s)
      _putchar(*s++);
   _putchar('\n');
}
