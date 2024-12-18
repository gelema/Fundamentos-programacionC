/*              Programa: triangle contour
        Descripcion:
            Este programa escribe el borde de un triangulo aproximadamente equilatero
            usando asteriscos.
*/
#include <stdio.h>

int main(){
    const int N = 7;

    printf("\t\t\t\t Borde de triangulos");

    //vertice superior
    for(int k = 1; k <= N-1; k++){
        printf(" ");
    }
    printf("*\n");


    //bordes laterales
    for(int k = 2; k <= N-1; k++){
        for(int j = 1; k < N-k; j++){
            printf(" ");
        }
        printf("*");
        for (int j = 1; j <= 2*k-3; j++){
            printf(" ");
        }
        printf("*\n");
        
    }
    
    //borde inferior
    for(int k = 1; k <= N-1; k++){
        printf(" *");
    }
    printf("\n");
    return 0;
};
