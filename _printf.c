##include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
  * _printf - function that prints std input
  * @format: format of input - c, %, s
  * @...: arguments
  * Return: 0
  */
int _printf(const char *format, ...)
{
	int size;
	va_list args;

	if (format == NULL)
		return (-1);

	size = _strlen(format);
	if (size <= 0)
		return (0);

	va_start(args, format);
	size = handler(format, args);

	_putchar(-1);
	va_end(args);

	return (size);
}
