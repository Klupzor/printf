#ifndef PRINTF
#define PRINTF
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct setting_function - Struct operators
 *
 * @type: format type to print
 * @func: The function associated to print
 */
typedef struct setting_function
{
	char *type;
	int (*func)(char *type_struct, unsigned int *wsize, va_list args);
} setfun;

unsigned int nelem(char *array);
int _printf(const char *format, ...);
int put_output(unsigned int *wsize, char * string);
int print_string(char *type_struct, unsigned int* wsize, va_list args);
#endif
