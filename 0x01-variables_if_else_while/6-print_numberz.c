#include <stdio.h>

/**
 * main - imprime todo los numero de un solo digito en base 10 a partir de 0
 * ,seguido de una nueva linea
 * solo puedo usar putchar
 * Return: siempre muestra 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
