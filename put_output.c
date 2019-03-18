#include <string.h>
#include <stdlib.h>

int put_output(char *output, char * string)
{
        unsigned int tam;

        tam = strlen(output) + strlen(string);
        output = realloc(output, tam);
        strcat(output, string);
        return(1);
}
