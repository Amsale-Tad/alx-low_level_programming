#include <stdio.h>
 /**
  * main - Entry point
  *
  *Return: Always 0 (success)
  */
int main() 
{
char c;
for (c = 'a'; c <= 'z'; ++c)
{
putchar("%c ", c);
}
putchar('\n')
return 0;
}
