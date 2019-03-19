#include "holberton.h"
#include <stdio.h>
/**
 * printc - print character
 *
 * @wsize: poninter to add writen_size.
 * @c: character to print.
 * @c2: next character to evaluate conditions.
 * @fc: pointer to format counter.
 *
 * Return: 1 when print case,
 * and -1 when it fail.
 */
int printc(unsigned int *wsize, unsigned int *fc, char c, char c2)
{
	char str[2];

	if (c == '%' && c2 == '%')
		*fc += 1;
	if (c == '%' && c2 == '\0')
		return (-1);
	str[0] = c;
	str[1] = '\0';
	put_output(wsize, str);
	return (1);
}
