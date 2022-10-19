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
	int length;
	int count = 0;
	va_list ptr;
    length = strlen(format);
	va_start(ptr, format);

	if (format == NULL)
	{
		return (-1);
	}

	for (i = 0; i< length; i++)
	{
		if (format[i] == '%')
		{
		switch (format[i + 1])
		{
			case ('d'):
				value = va_arg(ptr, int);
				count += count_integer(value);
				integer(value);
				break;
			case ('i'):
				value = va_arg(ptr, int);
				count += count_integer(value);
				integer(value);
				break;
			case ('s'):
				val = va_arg(ptr, char *);
				count += strlen(val);
				string(val);
				break;
			case ('%'):
				_putchar('%');
				break;
			case('c'):
				vall = (char) va_arg(ptr, int);
				count++;
				_putchar(vall);
				break;
			default:
				i -= 1;


		}
		i  = i + 2;
	}
		if (i < length)
			_putchar(format[i]);
		count++;
    }
	return (count);
}
