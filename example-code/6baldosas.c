/*       Calcular baldosas
*      Programa: baldosas
*      Description: 
*      Este programa calcula el costo de la baldosas
*      necesarias para cubrir una habitacion rectagunlar
*/ 
#include <stdio.h>

int main(){
  int largo, ancho;   //Dimensiones de tu habitacion en m 
  int lado;           //Lado de la baldosas en cm 
  int nLargo;         //Numero de baldosas a lo largo 
  int nAncho;         //Numero de baldosas a lo ancho 
  int baldosas;       //Numero total de baldosas
  float precio;       //Precio de cada baldosa
  float coste;        //Precio de cada baldosa

  printf("Dar el tamanio de la habitacion, en m: ");
  printf("Largo, Ancho :");
  scanf("%d%d",&largo, &ancho);
  printf("Lado de la baldosa, en cm: ");
  scanf("%d", &lado);
  printf("Precio de cada baldosa, en dolares: ");
  scanf("%f", &precio);
  //calular el numero de baldosas
  nLargo = (largo*100 + lado -1) / lado;
  nAncho = (ancho*100 + lado -1) / lado;
  baldosas = nLargo * nAncho;
  coste = baldosas * precio;

  //Imprimir el resultado
  printf("Total %5d baldosas\n", baldosas);
  printf("Coste %8.2f dolares\n", coste);


  return 0;
}
