#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
char low;
for (low = 'a'; low <= 'z'; low++)
putchar(low);
putchar('\n');
return (0);
}
