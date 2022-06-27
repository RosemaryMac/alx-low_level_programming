#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 * containing a copy of the string given as parameter.
 * @str: The string to be copied.
 * Return: If str == NULL or insufficient memory is available - NULL.
 * Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
char *dup;
unsigned int i, len;
i = 0;
len = 0;
if (str == NULL)
return (NULL);
while (str[len])
len++;
dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
return (NULL);
while ((dup[i] = str[i]) != '\0')
i++;
return (dup);
}
