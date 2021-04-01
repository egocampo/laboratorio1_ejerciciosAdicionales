/*
 ============================================================================
 Name        : ejercicio_01.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
 * Ingresar 5 números y calcular su media
 * */
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "matematicas.h"
#include "array.h"

#define QTY_NUMEROS 5

int main(void)
{
	int arrayNumeros[QTY_NUMEROS];
	float promedio;
	arr_getIntegersWithoutMinimumOrMaximum(arrayNumeros,QTY_NUMEROS,"Ingrese un número: ","",0);
	arr_calcularPromedioInt(arrayNumeros, QTY_NUMEROS, &promedio);
	printf("El promedio es: %.2f",promedio);
	return EXIT_SUCCESS;
}
