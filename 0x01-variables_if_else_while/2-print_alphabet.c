#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * Main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char low;
for (low = 'a'; low <= 'z'; low++)
putchar(low);
putchar('\n');
return (0);
}
