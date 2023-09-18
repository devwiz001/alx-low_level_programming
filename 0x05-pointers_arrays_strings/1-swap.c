#include "main.h"
/**
 * swap_int - where my program start
 * @a:swaped integer
 * @b: same as a
 */
void swap_int(int *a, int *b)
{	
	int c = *a;
	*a = *b;
	*b = c;
}
