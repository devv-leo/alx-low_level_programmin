#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_numbers - function prints numbers followed by a new line
 *@separator: pointer to string to printed between numbers
 *@n: number of integers passed to the function
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list parameter;
	int value;

	va_start(parameter, n);

	for (count = 0; count < n; count++)
	{
		value = va_arg(parameter, int);

		printf("%d", value);

		if ((separator != NULL) && (count < (n - 1)))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(parameter);
}
