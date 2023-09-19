#include "main.h"
#include <string.h>
/**
 * rev_string - where i start code from
 * @s: a pointer
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int start = 0;
	int end = length - 1;
	char rev;

	while (start < end)
	{
		rev = s[start];
		s[start] = s[end];
		s[end] = rev;

		start++;
		end--;
	}
}
