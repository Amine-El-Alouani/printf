#include "main.h"

/**
 * _printf - int func
 * @format: param
 * Return: int
 */

int _printf(const char *format, ...)
{
	int i;
	int value;
	char *val;
	int count = 0;
	va_list ptr;

	va_start(ptr, format);

	if (format == NULL)
	{
		return (0);
	}

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
		switch (format[i + 1])
		{
			case ('d'):
				value = va_arg(ptr, int);
				integer(value);
				break;
			case ('i'):
				value = va_arg(ptr, int);
				integer(value);
				break;
			case ('s'):
				val = va_arg(ptr, char *);
				string(val);
		}
		i  = i + 2;
	}
		_putchar(format[i]);
		count++;
	}
	return (count);
}
