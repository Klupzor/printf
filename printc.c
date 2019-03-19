#include "holberton.h"

/**
 * printc - print character
 *
 * @wsize: poninter to add writen_size.
 * @c: character to print.
 * @c2: next character to evaluate conditions.
 *
 * Return: 0 when print one char,
 * 1 when print spacial case,
 * and -1 when it fail.
 */
int printc(unsigned int *wsize, char c, char c2)
{
	char str[2];

	if (c == '%' && c2 == '%')
	{
		c  = '%';
		return (1);
	}
	if (c == '%' && c2 == '\0')
		return (-1);

	str[0] = c;
	str[1] = '\0';
	put_output(wsize, str);
	return (0);
}
