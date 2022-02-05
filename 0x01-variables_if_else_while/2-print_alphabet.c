#include <stdio.h>

/**
 * main - imprime el alfabeto en minusculas,
 * seguido de una nueva linea
 * Return: siempre muestra 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
