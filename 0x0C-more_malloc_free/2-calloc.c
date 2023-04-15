#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * _calloc - function allocate memory of nmem number of elemets
 * every element with size equal argument size, then initialize them with 0
 *
 * @nmemb: array elmemnt number
 * @size: size of every elment
 *
 * Return: pointer to first element
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb >= UINT_MAX / size || size >= UINT_MAX / nmemb)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}

	return ((void *)ptr);
}
