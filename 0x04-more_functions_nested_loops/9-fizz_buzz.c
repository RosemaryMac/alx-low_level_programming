#include <stdio.h>
/**
 * main - Prints the numbers from 1-100, but for multiples of three,
 *        Fizz is printed instead of the number, for multiples of five,
          Buzz, and for multiples of both three and five, FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
int num;
char f[] = "Fizz";
char b[] = "Buzz";
char fb[] = "FizzBuzz";
for (num = 1; num <= 100; num++)
{
if (num == 100)
printf("%s", b);
else if ((num % 3 == 0) && (num % 5 == 0))
printf("%s ", fb);
else if (num % 3 == 0)
printf("%s ", f);
else if (num % 5 == 0)
printf("%s ", b);
else
printf("%d ", num);
}
printf("\n");
return (0);
}
