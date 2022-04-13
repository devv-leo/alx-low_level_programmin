#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
/*
* while - causes infinite loop while (i < 10)
* \n": gives a new line	{
*		putchar(i);
*	}
*/
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
