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
	int count = 0;
	va_list ptr;
	va_start(ptr, format);

    	for (i = 0; format[i] != '\0'; i++)
    	{
		if (format[i] == '%')
	{
		switch (format[i+1])
		{
			case ('d'):
				value = va_arg(ptr, int);
				integer(value);
				break;
			case ('i'):
				value = va_arg(ptr, int);
				integer(value);
				break;
		}
		i  = i + 2;
	}
		_putchar(format[i]);
		count++;
	}
	return (count);
}
