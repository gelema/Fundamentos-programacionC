//Programa: HorasMinutosSegundo
//Conversion a horas, minutos y segundo de los 
//segundos introducidos como dato

#include <stdio.h>

int main(){
  int horas, minutos, segundos;

  printf("Segundo totales?\n");
  scanf("%d",&segundos);

  horas = segundos / 3600;
  segundos = segundos % 3600;
  minutos = segundos / 60;
  segundos = segundos % 60;
  printf("Equivalen a %2d horas %2d min. y %d seg.\n", horas, minutos, segundos);



  return 0;
}
