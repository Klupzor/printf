#include "holberton.h"

/**
 * nelem - count number of elements
 * @array: array for validate
 *
 * Return: numer of elements
 */

unsigned int nelem(char *array)
{
	unsigned int cont;

	if (array[0] == '\0' && array[1] == '\0')
		return (1);
	for (cont = 0 ; array[cont] != '\0' ; cont++)
	{
	}
	return (cont);
}
