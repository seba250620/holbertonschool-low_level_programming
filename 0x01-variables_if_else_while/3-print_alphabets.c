#include <stdio.h>

/**
 * main - imprime el alfabeto en miniscula y luego en mayuscula,
 * seguido de una nueva linea
 * Return: siempre muestra 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
