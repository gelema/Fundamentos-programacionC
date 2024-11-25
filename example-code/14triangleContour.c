/*              Programa: triangle contour
        Descripcion:
            Este programa escribe el borde de un triangulo aproximadamente equilatero
            usando asteriscos.
*/
#include <stdio.h>

int main(){
    const int N = 7; //altura del triangulo

    //Escribir el vertical superior
    printf("\t\tTriangle Contour\n");
    for(int k = 1; k <= N-1; k++){
        printf(" ");
    }
    printf("*\n");

    //imprime los bordes laterales
    for(int k = 2; k <= N-1; k++){
        for (int j = 1; k <= N-k; j++) {
            printf(" ");
        }
        printf("*");

    for(int j = 1; j <= 2 *  k- 3; j++){
        printf(" ");
        }
        printf("*\n");
    }

    //Imprime el borde interior
    for(int k = 1; k <= N-1; k++){
        printf(" *");
    }
    printf("\n");
    return 0;
}
