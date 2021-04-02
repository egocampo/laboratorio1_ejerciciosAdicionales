/*
 ============================================================================
 Name        : ejercicio_03.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
* * Escribir un programa que realice las siguientes acciones
* Limpie la pantalla
* Asigne a 2 variables numero1 y numero2 valores distintos de cero
* Efectúe el producto de dichas variables
* Muestre el resultado por pantalla
* Obtenga el cuadrado de numero1 y lo muestre por pantalla
* */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("clear");
	int numero1=2;
	int numero2=3;
	int producto;
	int cuadradoNumero1;
	producto = numero1 * numero2;
	printf("El producto es: %d\n",producto);
	cuadradoNumero1 = numero1 * numero1;
	printf("El cuadrado de %d es: %d\n",numero1,cuadradoNumero1);
	return EXIT_SUCCESS;
}
