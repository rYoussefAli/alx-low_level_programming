#include <stdio.h>
/**
 * print_last_digit - prints the last digit
 * @n: the parameter
 *
 * Return: returns the last digit
 */
int print_last_digit(int n){
	return (printf("%d", n % 10) ,n % 10);
}
