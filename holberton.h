#ifndef PRINTF
#define PRINTF
#include <stdarg.h>
/**
 * struct setting_function - Struct operators
 *
 * @type: format type to print
 * @func: The function associated to print
 */
typedef struct setting_function
{
	char *type;
	char *(*func)(char *type_struct, va_list args);
} setfun;

int _printf(const char *format, ...);
#endif
