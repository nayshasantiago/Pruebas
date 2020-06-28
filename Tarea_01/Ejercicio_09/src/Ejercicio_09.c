/*
 ============================================================================
 Name        : Ejercicio_09.c
 Author      : Naysha Santiago
 Version     :
 Copyright   :
 Description : Ejercicio_09 -  ED

 ============================================================================
 */
/*
9.Write a program that computes the product of the
elements that are stored on the diagonal
 above the main diagonal.
*/

#include <stdio.h>

    int main(){
    setbuf(stdout, NULL);
    int m[20][20];
    int n,j,i;

    printf("\n Ingrese la dimension de  la matriz (AxA) : ");
    scanf("%d",&n);


    //Lee todo los elementos de la matriz
    printf("\n Ingrese los elementos de la matriz :\n");
    for(i=0;i<n;i++){
    	printf("\n");
    	for(j=0;j<n;j++){
    		scanf("%d",&m[i][j]);
		}
	}

	///Muestra los elementos de la matriz
	printf("\n Los elementos de la matriz son :\n");
	for(i = 0; i < n; i++){
		printf("\n");
		for(j=0;j<n;j++)
		    printf(" %d",m[i][j]);
	}

	//Busca los elementos de la diagonal principal y los acumula en mul
	int mul =1;
	for(i=0;i<n;i++){
    	for(j=0;j<n;j++){
    		if(i == j){
    			mul=mul*m[i][j];
			}
		}
	}

	printf("\n El producto de los elementos de la diagonal principal es :\n");
	printf("%d",mul);
    return 0;
}
