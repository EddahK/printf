#include "main.h"
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
	va_list args;
	int i = 0, k = 0, num = 0;
	int n_displayed = 0;
	char *str = NULL;
        int (*func)(va_list);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
                {
                        func = _select_func(format[i + 1])
                        if (func != NULL)
			{
				
				n_displayed += func(args);
				i++;

                }
			
				
				
		i++;
	}
	va_end(args);
	return (n_displayed);
}
