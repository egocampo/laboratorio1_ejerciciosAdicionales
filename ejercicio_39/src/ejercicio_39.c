/*
 ============================================================================
 Name        : ejercicio_39.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/* Diseñar un programa que lea 4 números e imprima el mayor de los cuatro
 * */
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "array.h"

#define QTY_NUMBERS 4

int main(void)
{
	int arrayNumeros[QTY_NUMBERS];
	int numeroMaximo;
	arr_getIntegersWithoutMinimumOrMaximum(arrayNumeros,QTY_NUMBERS,"Ingrese el número: ","Error\n",1);
	if(arr_buscarMaximoInt(arrayNumeros, QTY_NUMBERS, &numeroMaximo)==0)
	{
		printf("El máximo es %d",numeroMaximo);
	}
	return EXIT_SUCCESS;
}
