#include "main.h"
/**
 * _isdigit - where my program begins
 * @c: funtion received
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
