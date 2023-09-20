#include "shell.h"

/**
 * bfree - free a free pointer and NULLs the address
 * @ptr: address of the pointer need  to be free
 *
 * Return: 1 if freed, else 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}

