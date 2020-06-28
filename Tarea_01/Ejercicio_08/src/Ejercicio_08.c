/*
 ============================================================================
 Name        : Ejercicio_08.c
 Author      : Naysha Santiago
 Version     :
 Copyright   :
 Description : Ejercicio_08 -  ED

 ============================================================================
 */

/*
8.Write a program to add two 3 ¥ 3 matrix using
pointers.
*/

#include <stdio.h>

//Prototipos
void mostrarMatrices(int (*)[3]);
void sumarMatrices(int (*)[3],int (*)[3]);

int main(){

setbuf(stdout, NULL);
int i, j, m1[3][3],m2[3][3],m3[3][3];

printf("\n Ingrese los elementos de la primera matriz : \n");
for(i=0;i<3;i++){
	printf("\n");
    for(j=0;j<3;j++){
        scanf("%d",&m1[i][j]);
    }
}

printf("\n Ingrese los elementos de la segunda matriz : \n");
for(i=0;i<3;i++){
	printf("\n");
    for(j=0;j<3;j++){
        scanf("%d",&m2[i][j]);
    }
}

sumarMatrices(m1,m2);
printf("La suma de ambas matrices es : \n");
mostrarMatrices(m1);
return 0;
}

//Subprogramas
void sumarMatrices(int (*m1)[3],int (*m2)[3]){
int i,j;

	for(i = 0; i < 3; i++){
		printf("\n");
		for(j=0;j<3;j++)
		 *(*(m1 + i)+j)+=*(*(m2 + i)+j);
	}
}

void mostrarMatrices(int (*m1)[3]){
int i,j;

	for(i = 0; i < 3; i++){
		printf("\n");
		for(j=0;j<3;j++)
		 printf("\t %d",*(*(m1 + i)+j));
	}
}
