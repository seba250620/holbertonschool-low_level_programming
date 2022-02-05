#include <stdio.h>

/**
 * main - imprime el alfabeto en minusculas,
 * seguido de una nueva linea, excepto q y e
 * Return: siempre muestra 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
