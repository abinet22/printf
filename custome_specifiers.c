#include "main.h"
/**
* print_the_string - prints the string
* @arg: argument
*
* Return: length of printed characters
*/
int print_the_string(va_list arg)
{
	int len;
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	len  = 0;
	while (s[len] != '\0')
	{
		if ((s[len] > 0 && s[len] < 32) || s[len] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			print_the_HEX(s[len]);
		}
		else
		{
			_putchar(s[len]);
		}
		len++;
	}
	return (len);
}
