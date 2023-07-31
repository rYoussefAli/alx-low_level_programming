/**
 * int_index - int_index
 * @array: array
 * @size: size
 * @cmp: cmp func
 *
 * Return: position
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (!(array && size && cmp))
		return (-1);
	if (size < 1)
		return (-1);
	for (a = 0; a < size; a++)
		if (cmp(array[a]))
			return (a);
	return (-1);
}
