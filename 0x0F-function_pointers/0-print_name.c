/**
 * print_name - print_name
 * @name: name
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
