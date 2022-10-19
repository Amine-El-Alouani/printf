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
	char vall;
	int count = 0;
	va_list ptr;

	va_start(ptr, format);

	if (format == NULL)
	{
		return (-1);
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
				break;
			case ('%'):
				_putchar('%');
				break;
			case('c'):
				vall = (char) va_arg(ptr, int);
				_putchar(vall);
				break;
			default:
				i -= 1;


		}
		i  = i + 2;
	}
		_putchar(format[i]);
		count++;
	}
	return (i);
}
