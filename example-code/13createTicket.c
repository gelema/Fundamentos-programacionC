/*      Este programa elabora un ticket de entrada y los
 *      resumenes de recadudacion de un espectaculo
 *      El precio del ticket depende de la edad del
 *      espectador (Nino, Joven, Adulto o Jubilado)
 */

#include <stdio.h>

int main(){
  const float PrecioBase = 6.0; //Precio de la butaca
  int butacas = 0;              //Numero de butacas vendidas
  int edad;                     //Edad del cliente
  float totalDolares = 0.0;       //Total de dolares recaudados
  float precio;                //Precio de cada butaca
  char opcion = ' ';            //Opcion de programa
  char tecla = ' ';            //Tecla SI/NO

  //Opcion F hasta fin
  while (opcion != 'F') {
      printf("Opcion (Ticket, Resumen o Fin) ?: ");
      opcion = ' ';
      while ((opcion != 'T') && (opcion != 'R') && (opcion != 'F')) {
          scanf("%c", &opcion);
      }
      if(opcion == 'T'){
          tecla = 'S';
          while (tecla == 'S') {
              printf("Edad: ");
              scanf("%d", &edad);
              butacas++;
              printf(".-----------------------------.\n");
              printf("|     TICKET DE ENTRADA       |\n");
              if(edad < 6){                                     //si edad es menor que 6 entra gratis
                printf("|           Gratis            ");
                precio = 0.0;
              } else if(edad < 18){                             //joven, 50%
                  printf("|Joven                      ");
                  precio = PrecioBase / 2.0;
              } else if ( edad < 65) {                          //jubilado, tarifa completa
                  printf("|Adulto                     ");
                  precio = PrecioBase;
              } else if ("|Jubilado                   ") {
                  precio = PrecioBase / 4.0;
              }
              totalDolares = totalDolares + precio;
              printf("  Precio: %4.2f|\n", precio);
              printf("'---------------------------'\n\n");
              printf("Otro ticket S/N ?: ");
              tecla = ' ';
              while ((tecla != 'S') && (tecla != 'N')) {
                scanf("%c", &tecla);
              }
          }
      }
  }

  return 0;
}
