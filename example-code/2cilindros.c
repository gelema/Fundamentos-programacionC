//      Area y volumen de un cilindro
/*  En este programa sencillo se obtiene el area y el volumen de un cilindro
*   a partir de su radio R y su altura A.
*
*           área = 21rR'+21rRA = 21rR(R+A)área = 21rR'+21rRA = 21rR(R+A)
*           volumen = piR^2A 
*
*/ 

// Programa: Cilindro
// Calcular del area y el volumen de un cilindro

#include <stdio.h>
int radio, altura;
int main(){
  printf("%s\n", "Dado un cilindro de dimensiones:");
  printf("%s\n", "radio = 1,5 y altura = 5,6");
  printf("%s", "su area es igual a: ");
  printf("%g\n", 2.0*3.141592*1.5*(1.5+5.6));
  printf("%s", "y su volumen es igual a: ");
  printf("%20.8f", 3.141592*.5*1.5*5.6);


  return 0;
}
