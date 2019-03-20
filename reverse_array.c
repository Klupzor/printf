#include "holberton.h"
#include <string.h>
/**
 * reverse_array - prints reverse  int array.
 *
 * @s: string;
 * @len: lenght string;
 * @wsize: write size counter;
 */
void reverse_array(char *s, unsigned int len, unsigned int *wsize)
{
	unsigned int start, end, c;
	char temp;
	char str[len];

	for (c = 0 ; c <= len ; c++)
	{
		str[c] = s[c];
	}

	for (start = 0, end = len - 1; start < end; start++, end--)
	{
		temp = *(str + start);
		*(str + start) = *(str + end);
		*(str + end) = temp;
	}

	put_output(wsize, str);
}
