#include "variadic_functions.h"
/**
 *sum_them_all - function returns the sum of all its parameters
 *@n: fixed parameter
 *Return: sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int add;

	va_list parameter;

	if (n == 0)
		return (0);

	va_start(parameter, n);

	add = 0;

	for (i = 0; i < n; i++)
		add += va_arg(parameter, int);

	va_end(parameter);

	return (add);
}
