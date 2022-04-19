#include "main.h"
/**
* print_the_HEX - convert decimal to HEXADECIMAL and prints it
* @n: the number of arguments
* Return: number of characters to be sent to console
*/
int print_the_HEX(char n)
{
	int j, len, temp, i;
	char *s;

	i = 0;
	if (n == 0)
		return (_putchar('0'));
	if (n < 1)
		return (-1);
	len = len_buffer(n, 16);
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
	{
		return (-1);
	}
	if (len == 1)
	{
		free(s);
		s = malloc(sizeof(char) * (len + 2));
		s[0] = '0';
		i = 1;
	}
	while (n != 0)
	{
		temp = n % 16;
		if (temp < 10)
		{
			temp = temp + 48;
		}
		else
		{
			temp = temp + 55;
		}
		s[i] = temp;
		i++;
		n = n / 16;
	}
	s[i] = '\0';
	if (len == 1)
	{
		temp = s[0];
		s[0] = s[1];
		s[1] = temp;
		len++;
	}
	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	free(s);
	return (len);
}
