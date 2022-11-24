#include "main.h"

/**
  * _printf - function that prints std input
  * @format: format of input - c, %, s
  * @...: arguments
  * Return: 0
  */
int _print_str(char *s)
{
int k = 0;

while (str[k] != '\0')
{
_putchar(str[k]);
k++;
}
 return (0);
}
