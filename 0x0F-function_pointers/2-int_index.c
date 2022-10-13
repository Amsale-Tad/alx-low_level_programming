#include "function_pointers.h"
/**
 *int_index - Search for an integer
 *@array:int
 *@size:int
 *@cmp:function
 *Return:index of the integer searched for
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int index;
if (array == NULL || cmp == NULL)
return (-1);
for (index = 0; index < size; index++)
{
if (cmp(array[index]) != 0)
return (index);
}
return (-1);
}
