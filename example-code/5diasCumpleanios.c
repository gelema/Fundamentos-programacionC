/*      Este progama calcula los dias que faltan para el cumpleanios
*       de una persona.
*
*
*       t_fechaCumple;
*       T_fechasHoy;
*       int dias;
*/ 

#include <stio.h>
#incldue <time.h>

int main(){
 int t_fechaCumple, T_fechasHoy;

  prinft("Cual es tu proximo cumpleanios: ");
  scanf("%d", &t_fechaCumple);

  T_fechasHoy = Hoy;

  dias = diasEntre(fechaHoy, t_fechaCumple);


  printf("\n Faltan%4d", dias);
  printf("Dias para tu cumpleanios: \n")

  reteurn 0;
}

