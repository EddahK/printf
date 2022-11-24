#include "../main.h"
#include <stdio.h>
#include <stdlib.h>

/* gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format main.c ../*.c */

int main(void)
{
	/* %% %c % s*/
	int n = 0;

	n = _printf("%%\n");

	printf("n: %d\n", n);

	 n = printf("%%\n");
	 printf("n: %d\n", n);

	_printf("%%\n");
	_printf("Name: %s\n", "Betty");
	_printf("Grade: %c\n", "1");

	printf("n: %d\n", n);

	return (n);
}
