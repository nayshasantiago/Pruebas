/*
 ============================================================================
 Name        : Ejercicio_22.c
 Author      : Naysha Santiago
 Version     :
 Copyright   :
 Description : Ejercicio_22 -  ED

 ============================================================================
 */
/*
22. Write a program to illustrate the use of a pointer
that points to a 2D array

********************************************************
Este programa multiplica 2 matrices A Y B de 3x3

*/

#include <stdio.h>
#include <stdlib.h>


///Prototipos

void mulMatrices(int (*m1)[3] ,int (*m2)[3]);
void mostrarMatrices(int (*m1)[3]);
void leerMatrices(int (*m1)[3]);

int main(){
	setbuf(stdout, NULL);
	int m1[3][3];
	int m2[3][3];
	//Ingresar los elementos de las 2 matrices
	printf("\n Ingrese los elementos de la matriz A : \n");
	leerMatrices(m1);
	printf("\n Ingrese los elementos de la matriz B : \n");
	leerMatrices(m2);
	mulMatrices(m1,m2);
	printf("\n La multiplicacion de AXB = \n");
	mostrarMatrices(m1);
}

//Subprogramas

//Este multiplica ambas matrices de 3x3
void mulMatrices(int (*m1)[3],int (*m2)[3]){
	int i,j;

	for(i = 0; i < 3; i++){
		printf("\n");
		for(j=0;j<3;j++)
		 *(*(m1 + i)+j)*=*(*(m2 + i)+j); /// *= "guarda la x en m1"
	}
}

//Este muestra los elementos de la matriz producto guardada
void mostrarMatrices(int(*m1)[3]){
	int i,j;

	for(i = 0; i < 3; i++){
		printf("\n");
		for(j=0;j<3;j++)
		 printf("\t %d",*(*(m1 + i)+j));
	}
}

//Este lee los 9 elementos de las matrices
void leerMatrices(int (*m1)[3]){
	int i,j;

	for(i = 0; i < 3; i++){
		printf("\n");
		for(j=0;j<3;j++)
		scanf("%d",&(m1[i][j]));
	}
}

