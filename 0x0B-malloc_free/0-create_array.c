#include <stdio.h>
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

    if (size < 1)
    {
        return NULL;
    }

    char *v = (char*)malloc(sizeof(char) * size);

    for (b = 0; b < size; ++b)
    {
        v[b] = c;
    }
    
    return (v);
}
