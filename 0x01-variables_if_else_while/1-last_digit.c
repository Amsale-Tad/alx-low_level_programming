#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n % 100 > 5)
{
printf("Last digit of n is n and is greater than 5\n");
}
else if (n % 100 == 0)
{
printf("Last digit of n is n and is 0\n");
}
else
{
printf("Last digit of n is n and is less than 6\n");
}
return 0;
}
