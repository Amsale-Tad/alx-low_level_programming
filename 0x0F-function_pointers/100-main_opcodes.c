#include <stdio.h>
#include <stdlib.h>
/**
 *main - Prints the opcodes of itself.
 *@argc: The number of arguments supplied to the program.
 *@argv: An array of pointers to the arguments.
 *
 *Return: Always 0.
 */
int main(int argc, char *argv[])
{
int x, i;
unsigned char *p;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
x = atoi(argv[1]);
if (x < 0)
{
printf("Error\n");
exit(2);
}
p = (unsigned char *)main;
i = 0;
if (x > 0)
{
while (i < (x - 1))
printf("%02hhx ", p[i++]);
printf("%hhx\n", p[i]);
}
return (0);
}
