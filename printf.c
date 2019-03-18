#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * printf - print characters with a format to stdout
 *
 * @format: string that contains characters to print
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
/*
	setfun functions[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percentage},
		{NULL, NULL}
	};
*/
	va_list args;
	unsigned int fc, tam, count, i, oc;
	char *output;
	int written_size, tp;

	if (!format)
		return(-1);

	tam = strlen(format);
	printf("tam: %u\n", tam);
	output = malloc(sizeof(char) * tam);
	va_start(args, format);

	for (fc = 0, oc = 0 ; format[fc] != '\0' ; fc++)
	{
		tp = 0;
		if (format[fc] == '%')
		{
			if (format[fc + 1] == '%')
			{
				tp = 1;
				tam--;
				output = (char *) realloc(output, sizeof(char) * tam);
				output[oc] = '%';
				oc++;
				fc++; 
			}
			for (count = fc + 1;  tp == 0 || format[count] != '\0'; count++)
			{
					/*
				for (i = 0 ; functions[i].type != NULL ; i++)
				{
					if (format[count] == functions[i].type)
					{
						tp = 1;
						output[fc] = functions[i].func("prueba", args);
					}
				}
					*/
			}
		}
		if (tp == 0)
		{
			output[oc] = format[fc];
			oc++;
		}
	}
	printf("tamfin: %u\n", tam);
	written_size =	write(1, output, tam);
	free(output);
	return (written_size);
}
