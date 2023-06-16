#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - Memory allocated using malloc
 * @b: Number of bytes to be allocated
 *
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
