#include <stdio.h>

/**
 * _isalpha - checks if the parameter is alphabetic
 * @c: the parameter
 *
 * Return: always returns 1 or 0 (success).
 */

int _isalpha(int c)
{
    return (!((c>122 || c<65) || (c>90&&c<97))) ? 1: 0;
}
