#include <stdlib.h>
/**
 *_islower - checks if the character is a lowercase
 *@c: input character
 *
 *Return: returns 1 if lower, 0 otherwise.
 *
 *
 */
int _islower(int c)
{
	return (c>96 && c<123)? 1: 0;
}
