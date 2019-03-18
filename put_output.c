#include "holberton.h"

int put_output(unsigned int *wsize, char * string)
{
        unsigned int tam;

	tam = nelem(string);
	write(1, string, tam);
	*wsize += tam;
	return(1);
}
