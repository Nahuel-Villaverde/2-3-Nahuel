/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);

    int num;

	printf("Ingrese el número: ");
	scanf("%d",&num);

	if(num % 2 == 0)
	{
		printf("El numero es %d es Par", num);
	}
	else
	{
		printf("El numero es %d es Impar", num);
	}

    return 0;
}
