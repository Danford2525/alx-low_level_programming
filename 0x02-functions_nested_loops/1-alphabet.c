#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*print_alphabet - a function that prints the alphabet in lowercase.
*
*Return: Always 0.
**/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)

	{
	putchar(i);
	}
	putchar('\n');
}
