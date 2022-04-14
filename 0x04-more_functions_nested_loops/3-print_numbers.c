#include "main.h"

/**
* main - print_numbers
* 
* Return: Always 0.
*/
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar (i + '0');
		i++;
	}

	putchar ('\n');
}
