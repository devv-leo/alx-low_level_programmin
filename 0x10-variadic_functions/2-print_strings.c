#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_strings - variadic function prints strings followed by a new line
 *@separator: string to be printed between the strings
 *@n: number of strings passed to the function
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list parameter;

	va_start(parameter, n);

	for (count = 0; count < n; count++)
	{
		const char * const p = va_arg(parameter, char *);

		if (p == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", p);
		}

		if ((separator != NULL) && (count < (n - 1)))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(parameter);
}
