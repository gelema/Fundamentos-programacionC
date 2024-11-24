/*  Se trata de realizar un programa que lea 3 valores enteros y los ordene de
    menor a mayor en las mismas variables en que se leen: el valor menor quedará
    en la primera variable y el mayor en la última.
    La ordenación se realiza en dos pasos: la primera parte se dedica a ordenar los
    dos primeros valores y en la segunda se ordenará el tercero comparándolo con
    los ya ordenados . Se utiliza una variable auxiliar para realizar los intercambios
    de valores entre las variables.
*/

#include <stdio.h>

int main(){
  int valUno, valDos, valTres, auxiliar;
  
  //Leer los datos
  printf("Digite los numeros: \n");
  scanf("%d %d %d", &valUno, &valDos, &valTres);

  //Primer paso: Odenar los dos primeros datos 
  if(valUno > valDos){
    auxiliar = valUno;
    valUno = valDos;
    valDos = auxiliar;
  }

  //Seundo paso: Situar el tercer dato.
  if(valTres < valUno){
    auxiliar = valTres;
    valTres = valDos;
    valDos = valUno;
    valUno = auxiliar;
  } else if(valTres < valDos){
    auxiliar = valDos;
    valDos = valTres;
    valTres = auxiliar;
  }

  //Tercer paso: Escribir el resultado
  printf("Datos ordenados: %5d, %5d, %5d.\n", valUno, valDos, valTres );

  return 0;
}
