#include "main.h"
/**
 * malloc_checked - Normal terminate w exit code 98
 * @b: allocated memory
 * Return: Pointer to b
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
