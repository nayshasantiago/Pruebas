/*
 ============================================================================
 Name        : Ejercicio_02.c
 Author      : Naysha Santiago
 Version     :
 Copyright   :
 Description : Ejercicio_02 -  ED

 ============================================================================
 */

/*
2.Write a program that reads an array of 100
integers. Display all the pairs of elements whose
sum is 50.
*/

#include <stdio.h>

int main(){
//setbuf(stdout, NULL);
int i,j, mat[100];
int n=1;

printf("\n Los elementos del arreglo son : ");
//Este bucle asigna los 100 primeros enteros al array
    for(i=0;i<100;i++){
        mat[i]=n++;
        printf(" %d",mat[i]);
        printf("  ");
    }


printf("\n Las parejas que suman 50 son :");
//Este bucle buscar los elementos del array que sumen 50
	for(i=0;i<100;i++){
   		for(j=i+1;j<100;j++){
        	if(mat[i]+mat[j]==50){
           	 	printf("\n");
            	printf("%d",mat[i]);
           		printf("  ");
          		printf("%d",mat[j]);
            }
  		}
    }
}
