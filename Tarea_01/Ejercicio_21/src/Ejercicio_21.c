/*
 ============================================================================
 Name        : Ejercicio_21.c
 Author      : Naysha Santiago
 Version     :
 Copyright   :
 Description : Ejercicio_21 -  ED

 ============================================================================
 */

/*
21.Write a program to calculate XA + YB where A and
B are matrices and X=2 and Y=3.
*/

#include <stdio.h>
#include <conio.h>


int main(){
	setbuf(stdout, NULL);
	int i,j;
	int col1,col2,fil1,fil2;
	int m1[10][10],m2[10][10],mFinal[10][10];

	printf("\n Ingrese el numero de culumnas de la matriz A :");
	scanf("%d",&col1);
	printf("\n Ingrese el numero de filas de la matriz A :");
	scanf("%d",&fil1);
	printf("\n Ingrese el numero de culumnas de la  matriz B :");
	scanf("%d",&col2);
	printf("\n Ingrese el numero de filas de la matriz B :");
	scanf("%d",&fil2);

	if(col1 !=col2 || fil1!=fil2){
		printf("\n Los numeros de filas y columnas de las matrices deben ser iguales");
		//getch();
		//exit();
	}

	//Ingresar datos de la matriz A
	printf("\n Ingrese los datos de la matriz A : ");
	for(i=0;i<fil1;i++){
		printf("\n");
		for(j=0;j<col1;j++){
			scanf("%d",&m1[i][j]);
		}
	}

	//Ingresar datos de la matriz B
	printf("\n Ingrese los datos de la matriz B : ");
	for(i=0;i<fil2;i++){
		printf("\n");
		for(j=0;j<col2;j++){
			scanf("%d",&m2[i][j]);
		}
	}

	///Guarda la operacion AX+BY
	for(i=0;i<fil2;i++){
		for(j=0;j<col2;j++){
			mFinal[i][j]= 2*m1[i][j]+3*m1[i][j];
		}
	}

	//Imprime la matriz resultante
	printf("\n Los elementos de la matriz 2*A + 3*B es :");
	for(i=0;i<fil2;i++){
		printf("\n");
		for(j=0;j<col2;j++){
			printf("\t  %d",mFinal[i][j]);
		}
	}
	return 0;

}
