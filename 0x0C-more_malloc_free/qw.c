#include <stdio.h>
#include <stdlib.h>
/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
int i = 0;
while (s[i])
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}
return (1);
}
/**
 * main - Check the code
 * @argc: number of arguments
 * @argv: arguments
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
int num1, num2, mul;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
else
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
mul = num1 *num2;
printf("%d, %d, %d.\n", num1, num2, mul);
return (0);
}
}
