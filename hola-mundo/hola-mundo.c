/*
 * hola-mundo.c
 *
 *  Created on: Apr 5, 2020
 *      Author: utnso
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
	int i;
	char text[256];

	printf("hola mundo!\n");
	for(i = 0; i<= 15; i++){
		printf("El numero de iteracion es: %d\n",i);
	}
	printf("Escribi algo:");
	fgets(text,256,stdin);
	printf("El texto ingresado es: %s",text);

	return EXIT_SUCCESS;
}
