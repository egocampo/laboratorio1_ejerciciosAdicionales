/*
 ============================================================================
 Name        : ejercicio_40.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/* Se ingresa por consola la cantidad de agua caída, en milímetros día a día durante un mes. Se pide
*  determinar el día de mayor lluvia, el de menor y el promedio
 * */
#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"
#include "array.h"

#define QTY_DAYS 5

int main(void) {
	float precipitacionesRegistradas[QTY_DAYS];
	int positionMinimum,positionMaximum;
	float promedioPrecipitaciones;
	arr_getFloatWithPositions(precipitacionesRegistradas, "Ingrese precipitaciones día ",QTY_DAYS);
	positionMinimum=arr_searchPositionOfMinimum(precipitacionesRegistradas, QTY_DAYS);
	positionMaximum=arr_searchPositionOfMaximum(precipitacionesRegistradas, QTY_DAYS);
	arr_calcularPromedioFloat(precipitacionesRegistradas, QTY_DAYS,&promedioPrecipitaciones);
	printf("El día de mayor lluvia: #%d\n",positionMaximum);
	printf("El día de menor lluvia: #%d\n",positionMinimum);
	printf("El promedio de precipitaciones: %.2f ml",promedioPrecipitaciones);
	return EXIT_SUCCESS;
}
