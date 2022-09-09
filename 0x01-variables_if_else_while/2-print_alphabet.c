#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main()
{
char ch;  
for(ch = 'a'; ch <= 'z'; ch++)
{
putchar("%c", ch);
}
putchar("\n");

return (0);
}
