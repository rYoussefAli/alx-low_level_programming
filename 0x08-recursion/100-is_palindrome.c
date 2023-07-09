#include <stdio.h>
/**
 * is_palindrome - is_palindrome
 * @s: the first param
 *
 * Return: is_palindrome? 1 : 0.
 */

char *v = "";

int is_palindrome(char *s)
{
	if (*s == '\0')
		return 0;

	s++;
	is_palindrome(s);
	
	*v = *v+ *s;
	printf("%s\n", v);
	return 0;
}
