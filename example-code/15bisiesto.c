#include <stdio.h>

int esBisiesto(int anio){
    if((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0 )){
        return 1;
    }else {
        return 0;
    }
}

int main(){
    int mes, anio;
    printf("Ingrese el mes en numeros del (1 - 12): ");
    scanf("%d",&mes);
    printf("Ingrese el anio: ");
    scanf("%d", &anio);

    //comprobrar el anio
    if(esBisiesto(anio)){
        printf("El anio %d es bisiesto.\n",anio);
    }else {
        printf("El anio %d no es bisiesto.\n",anio);
    }
}
