#include <stdio.h>

/**
 * main - imprime todos los numeros de base 16 en minisculas,
 * seguido de una nueva linea
 * Return: siempre muestra 0
 */
int main(void)
{
	int n;
	char ch;
	
	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
