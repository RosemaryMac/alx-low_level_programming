#include "main.h"
/**
 * main - prints _putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char word[9] = "_putchar";
int i;
for (i = 0; i < 8; i++)
_putchar(word[i]);
_putchar('\n');
return (0);
}
