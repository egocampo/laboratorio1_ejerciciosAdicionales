/*
 ============================================================================
 Name        : ejercicio_04.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*Escribir un programa que realice las siguientes acciones:
* Limpie la pantalla
* Declare 2 variables y les asigne sendos valores
* Realice la resta de dichas variables y muestre por pantalla la leyenda "Resultado positivo" en caso de
* ser mayor que cero o "Resultado negativo" si es menor que cero
* */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("clear");
	int numero1=10;
	int numero2=4;
	int resta;
	resta = numero1 - numero2;
	if(resta>0)
	{
		printf("Resultado positivo\n");
	}
	else if(resta<0)
	{
		printf("Resultado negativo\n");
	}
	return EXIT_SUCCESS;
}
