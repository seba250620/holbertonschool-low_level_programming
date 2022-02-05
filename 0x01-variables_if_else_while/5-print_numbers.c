#include <stdio.h>

/**
 * main - imprime todos los numeros de un solo digito de la base
 * 10 a partir de 0, seguido de una linea nueva
 * Return: siempre muestra 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
