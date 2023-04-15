#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
*malloc_checked - function to check if dynamic memory allocation failed
*or successed, if failed, function cause normal process termination
*with status value of 98
*
*@b: number of wated to allocate memory in bytes
*
*Return: nothing
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = (unsigned int *)malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
