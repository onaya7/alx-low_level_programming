#include "main.h"

/**
  * print_alphabet - a program that prints 10 times the alphabet, in lowercase.
  *
  * Return: (0) on success .else error
  */

void print_alphabet(void)
{
	char alphabet = 'a';
	int count = 1;

	while (count <= 10)
	{

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		count++

	}



}


























