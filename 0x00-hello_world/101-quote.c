#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * prints standard error
 *
 * Return: Always 1(Error)
 */
int main(void)
{
char ch[] = "and that piece of art is useful\" -Dora Korpar, 2015-10-19\n";
write(STDOUT_FILENO, ch, 59);
return (1);
}
