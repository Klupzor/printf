#include "holberton.h"

/**
 * put_output -  put the string received
 *
 * @wsize: size of string
 * @string: string to print
 *
 * Return: 1 is suscessfully
 */
int put_output(unsigned int *wsize, char *string)
{
	unsigned int tam;

	tam = nelem(string);
	write(1, string, tam);
	*wsize += tam;
	return (1);
}
