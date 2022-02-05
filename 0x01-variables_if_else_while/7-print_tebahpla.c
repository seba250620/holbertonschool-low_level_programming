#include <stdio.h>

/**
 * main - imprime el alfabeto en minusculas al reves,
 * seguido de una nueva linea
 * Return: siempre muestra 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
