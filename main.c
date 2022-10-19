#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)

{
	int len;
	int len2;

	len = _printf("%s", "This sentence is retrieved from va_args!\n");
	len2 = printf("%s", "This sentence is retrieved from va_args!\n");
	printf("%d %d \n", len, len2);
	return (0);
}
