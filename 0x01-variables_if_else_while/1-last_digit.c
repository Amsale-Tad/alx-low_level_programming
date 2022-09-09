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

if (n > 5)
{
printf("Last digit of 98 is 8 and is greater than 5\n");
}
else if (n < 6)
{
printf("Last digit of -98 is -8 and is less than 6\n");
}
else
{
printf("Last digit of 980 is 0 and is 0\n");
}
return 0;
}
