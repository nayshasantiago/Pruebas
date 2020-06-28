/*
 ============================================================================
 Name        : Ejercicio_06.c
 Author      : Naysha Santiago
 Version     :
 Copyright   :
 Description : Ejercicio_06 -  ED

 ============================================================================
 */

/*
6.Write a program to read and display a square
(using functions).
*/
#include <stdio.h>


///prototipos
void leerMatriz(int n,int m1[10][10]);
void mostrarMatriz(int n,int m1[10][10]);

int main(){
	setbuf(stdout, NULL);
	int n;
	int m1[10][10];

    printf("Ingrese el tamaño del cuadrado (1 a 10) :");
    scanf("%d",&n);
    leerMatriz(n,m1);
    mostrarMatriz(n,m1);

}

//Subprogramas

//Llena toda la matriz con ceros
void leerMatriz(int n,int m1[10][10]){
	int i,j;
    for( i=0; i<n;i++){
        for( j=0; j<n;j++){
           m1[i][j] = 0;
        }
    }
}

//Muestra la matriz con puros 0's
void mostrarMatriz(int n,int m1[10][10]){
int i,j;

	for(i = 0; i <n; i++){
		printf("\n  ");
		for(j=0;j<n;j++){
			printf("\t %d",m1[i][j]);
		}
		printf("\n    ");
	}
}

