/* Programa: Diferencia en dias
 Descripcion:
  Este programa calcula los dias entre dos fechas
  de forma aproximada, contando todos
  meses de 30 dias, y los anios de 365.
*/


#include <stdio.h>

int main(){

  int dia1, mes1, anio1;        //primera fechas
  int dia2, mes2, anio2;        //segunda fechas
  int diasFecha1, diasFechas2;  //dias desde el incio de anio
  int Diferencia;   //Diferencia en dias


  printf("Primera fecha (dd, mm, aaaa): ");
  scanf("%d,%d,%d", &dia1, &mes1, &anio1);
  printf("Segunda fecha (dd, mm, aaaa): ");
  scanf("%d,%d,%d", &dia2, &mes2, &anio2);

  diasFecha1 = (mes1 -1) * 30 + dia1;
  diasFechas2 = (mes2 -1) * 30 + dia2;

  Diferencia = (anio2 - anio1)*365 + diasFechas2 - diasFechas2;  


  //Imprimir resultados 
  printf("Desde %2d/%2d/%2d\n", dia1, mes1,anio1);
  printf("Hasta %2d/%2d/%2d\n", dia2, mes2, anio2);
  printf("Hay %5d dias\n", Diferencia);

  return 0;
}
