#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *  * main - Print "Holberton" followed by a new line.
 *  * Description: You are not allowed to include standard libraries.
 *  * Return: 0
**/
int main(void)
{
	char holberton[] = "_putchar";
	int i = 0;
	while (holberton[i] != '\0')

{
	putchar(holberton[i]);
	i++;
}
	putchar('\n');
	return (0);
}
