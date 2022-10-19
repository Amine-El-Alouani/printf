#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int count_integer(int n)                                                                                                                
{                                                                                                                                       
            int i = 0;                                                                                                                  
            if (n < 0)                                                                                                                  
            {                                                                                                                           
                    i++;                                                                                                                
            }                                                                                                                           
            while(n / 10)                                                                                                               
            {                                                                                                                           
                    n = n/10;                                                                                                           
                    i++;                                                                                                                
            }                                                                                                                           
            return(i+1);                                                                                                                
                                                                                                                                        
}   
/**
 * integer - void func
 * @value: param
 * Return: nothing
 */

void integer(int value)
{
	if (value < 0)
	{
		_putchar('-');
		value = -value;
	}

	if (value / 10)
	{
		integer(value / 10);
	}

	_putchar(value % 10 + '0');
}

/**
 * string - void func
 * @str: param
 * Return: nothing
 */


void string(char *str)
{
	int i = 0, f, j;

	if (!str)
	{
		char *error = "(null)";
		
		for (j = 0; error[j] != '\0'; j++)
		{
			_putchar(error[j]);
		}
		_putchar('\n');
	}
	else
	{
		while (str[i] != '\0')
		{
			i++;
		}	

		for (f = 0; f < i; f++)
		{
			_putchar(str[f]);
		}
	}
}
