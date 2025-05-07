//Se trata de imprimir con asteriscos el perímetro de un triangulo aproximadamente equilátero

#include <stdio.h>

int main(){
  int N = 7; //Altura del  triangulo

  //vertice superior
  for(int k = 1; k <= N-1; k++){
    printf(" ");
  }

  //Imprimir los bordes laterales
  for(int k = 2; k <= N-1; k++){
    for(int j = 1; j <= N-k; j++){
      printf(" ");
    }
    printf("*");
    for(int j = 1; j <= 2*k-3; j++){
      printf(" ");
    }
  }

  //Imprimir el borde inferior
  printf("*");
  for(int k = 1; k <= N-1; k++){
    printf(" *");
  }

  printf("\n");
  return 0;
}
