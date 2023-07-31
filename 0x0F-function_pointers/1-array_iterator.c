#include <stdlib.h>
/**
 * array_iterator - array_iterator
 * @array: array
 * @size: size
 * @action: the func
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array && size && action)
	{
		for (a = 0; a < size; a++)
			action(array[a]);
	}
}
