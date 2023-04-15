#include "main.h"
#include <stdlib.h>

/**
 * _realloc - realloc() custum function
 *
 * @ptr: pointer to the old allocated memory
 * @old_size: size of old allocated memory block in bytes
 * @new_size: size of memory block that will be allocated in bytes
 *
 * Return: pointer to new allocated memory block (if successed)
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	char *new_ptr;

	if (old_size == new_size)
		return (ptr);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return ((void *)new_ptr);
	}
	else if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
			new_ptr[i] = ((char *)ptr)[i];
		free(ptr);
		return ((void *)new_ptr);
	}
	else if (new_size < old_size)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		for (i = 0; i < new_size; i++)
		{
			new_ptr[i] = ((char *)ptr)[i];
		}
		free(ptr);
		return ((void *)new_ptr);
	}
	return (ptr);
}

