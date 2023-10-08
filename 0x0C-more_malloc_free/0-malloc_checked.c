#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - it allocates memory using malloc
 * @b: the number of bytes to be  allocated
 * Return: this is a pointer that is to be  allocated to the memory
 */

void *malloc_checked(unsigned int b)

{

	void *ptr;


	ptr = malloc(b);


	if (ptr == NULL)

		exit(98);


	return (ptr);

}
