#include "main.h"
#include <stdio.h>

int main() {
	int g = is_prime_number(12345);
	putchar(':');
	printf("%d",g);
	putchar(':');
	putchar('\n');
	return 0;
}