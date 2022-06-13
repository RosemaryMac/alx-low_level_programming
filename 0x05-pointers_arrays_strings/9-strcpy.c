#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: A pointer to destination of string/ a buffer to copy the string to
 * @src: A pointer to source string to copy from
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
int index = 0;
while (src[index])
{
dest[index] = src[index];
index++;
printf("%s\n", index);
}
return (dest);
}
