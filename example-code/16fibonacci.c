// La secuencia de fibonacci la vamos a realizar: tomando en cuenta 
//

#include <stdio.h>
#include <limits.h>


int main(){
  int termino = 0;
  int anterior = 1;
  int aux;

  while(INT_MAX - termino >= anterior){
    aux = termino + anterior;
    anterior = termino;
    termino = aux;
    printf("%10d\n", anterior);
  }

  return 0;
}
