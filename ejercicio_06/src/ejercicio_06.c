/*
 ============================================================================
 Name        : ejercicio_06.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/* De 10 números ingresadas indicar cuantos son mayores a cero y cuantos son menores a cero
 * */
#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#include "utn.h"

#define QTY_NUMEROS 10

int main(void)
{
	int numeros[QTY_NUMEROS];
	int i;
	int contadorPositivos=0;
	int contadorNegativos=0;
	arr_getIntegersWithoutMinimumOrMaximum(numeros, QTY_NUMEROS,"Ingrese el numero: ","Error\n",3);
	for(i = 0 ; i < QTY_NUMEROS ; i++)
	{
		if(numeros[i]>0)
		{
			contadorPositivos++;
		}
		else if(numeros[i]<0)
		{
			contadorNegativos++;
		}
	}
	printf("Hay %d números mayores a cero.\n",contadorPositivos);
	printf("Hay %d números menores a cero.\n",contadorNegativos);
	return EXIT_SUCCESS;
}
