/*
 ============================================================================
 Name        : ejercicio_05.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
* Escribir el programa necesario para calcular y mostrar el cuadrado de un número. El número debe ser
* mayor que cero, en caso de error que aparezca el mensaje "ERROR, el número debe ser mayor que cero"
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int numero;
	int cuadradoNumero;
	printf("Ingrese un número: ");
	scanf("%d",&numero);
	if(numero>0)
	{
		cuadradoNumero=numero*numero;
		printf("El cuadrado de %d es: %d\n",numero,cuadradoNumero);
	}
	else
	{
		printf("ERROR, el número debe ser mayor que cero");
	}
	return EXIT_SUCCESS;
}
