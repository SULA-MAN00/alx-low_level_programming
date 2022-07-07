#include "main.h"
/**
* main - check the code
* print_alphabet - print the alphabet
*
* Return: Always 0.
*/
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		++a;
	}
	_putchar(10);

}
