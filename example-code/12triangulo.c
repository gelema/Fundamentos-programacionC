#include <stdio.h>
int main() {
    const int centro = 35;
    int inicial = 1;
    int nivel;
    // Leer datos
    printf("Digite la altura del triangulo:");
    scanf("%d", &nivel);
    // Iteración por línea
    for (int altura = inicial; altura <= nivel; altura++) {
        // Paso 1: Situar primer número de cada línea
        for (int indice = 1; indice <= centro-altura; indice++) {
            printf(" ");
        }
        // Paso 2: Primera mitad de la línea del triángulo
        for (int indice = inicial; indice <= altura; indice++) {
            printf("%d", indice);
        }
        // Paso 3: Segunda mitad de la línea del triángulo
        for (int indice = altura - 1; indice >= inicial; indice--) {
            printf("%d", indice);
        }
        printf("\n"); // Nueva línea al final de cada fila
    }
    
    return 0;

}