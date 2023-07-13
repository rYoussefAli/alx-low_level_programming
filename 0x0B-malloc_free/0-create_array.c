#include <stdio.h>
#include <stdlib.h>
#include "main.h" 

/**
 * create_array - create_array
 * @size: take the size of the array
 * @c: the initalizer char
 * Return - NULL if size = 0, memory allocation (array) otherwise
**/
char *create_array(unsigned int size, char c)
{
    unsigned int b;
    char *v = NULL;

    if (size < 1)
    {
        return NULL;
    }

    v = (char*)malloc(sizeof(char) * size);

    for (b = 0; b < size; ++b)
    {
        v[b] = c;
    }
    
    return (v);
}
