# Metodologia de desarrollo de Programas II.

El objetivo de este tema es multiple.
1. Refinamiento en la tecnica de sucesiones.
2. Introduccion a la idea de verificacion formal de programas de manera simplificada.
3. Introduce al problema de la eficiencia y de manera simplificada el concepto de complejidad algoritmica.

## Desarrollo con esquemas de seleccion e iteracion
En este apartada se ilustra el empleo de la tecnica de refinamiento sucesivos explicacion en el tema 4, ampliando ahora
con la posibilidad de utilizar las nuevas estructuras de seleccion e iteracion. Con ello se tiene tres posibilidades a la
hora de refinar una accion compuesta:
* Organizarla como secuencia de acciones.
* Organizarla como selección entre acciones alternativas.
* Organizarla como iteración de accionces.

## Esquema de seleccion
Analizar para plantear una accion compuesta como la realizacion de una accion entre varias posibles, dependiendo de las
condiciones. Vamos a elegir una de varias opciones posibles.
Identificar sus elementos componentes las cuales son:
* Identificar cada una de las alternativas del esquema, y las acciones correspondientes.
* Identificar las condiciones para seleccionar una alternativa u otra.

La condición para elegir una acción u otra es que el año sea bisiesto.
De forma simplificada (pero válida para años entre 1901 y 2099) expresaremos la condición como equivalente a
que el año sea múltiplo de cuatro.

__anio % 4 == 0;__

Colocando cada elemento identificado en el lugar correspondiente del esquema, tendremos:

```c
    if(anio % 4 ==0){
        dias = 28;
    } else {
        dias = 29
    }
```
Podemos replantear el problema de la siguiente manera:

```c
    dias = 28;
    if(anio % 4 == 0){
        dias = 29;
    }
```

Desarrollaremos el cálculo de los días mes, para cualquier mes del anio. Las alternativas son:

31 días: Enero, Marzo, Mayo, Julio, Agost.o, Octubre, Diciembre.
30 días: Abril , J unio, Septiembre, Noviembre
29 días: Febrero (año bisiesto).
28 días: Febrero (añi normal).

Al escribir las condiciones debemos tener al cuenta que si hay que evaluar una de ellas es porque
todas las anteriores han resultado falsas:

```c
if((mes == 2) && (año == 0)){
    dias = 29;
}else if(mes == 2){
    dias = 29;
}else if((mes == 4) || (mes == 6)){
    (mes == 9) || (mes == 11)){
        dias = 30;
    }
}else {
    dias = 31;
}
```
## Esquema de iteracion

Una iteración o bucle consiste en la repetición de una acción o grupo de acciones hasta accioes el
resultado deseado.
Esquema de iteracion:
Identificar cada uno de sus elementos
Identificar las variables para almacenar la información

### Serie Fibonacci
Cada término de esta serie se obtiene sumando los dos anteriores. La serie comienza con los terminos 0 y 1, que se suponen
ya impresos antes del bucle. Se trata de calcular e imprimir tantos terminos somo se posible.
Detallaremos paso a paso la resolucion de manera informal seguido de su codificacion C.

```c

// A) Acciones útiles a repetir: Imprimir un termino
printf("%10d\n", termino);
int termino;

// B) Almacenamiento y actualización de variables
 aux = termino * anterior;
anterior = termino;
termino = aux;

// C) Varaiables adicionales
int anterior;
int aux;

// D) Evaluar la condicion
INT_MAX-termino  < anterior;

// E) Valores adicionales de las variables
anterior = 0;
termino = 1;
```

El bucle completo sera asi:
```c
int termino, anterior, aux;
anterior = 0;
termino = 1;
while(INT_MAX-termino >= anterior){
    aux = termino + anterior;
    anterior = termino;
    termino = aux;
    printf("%10d\n", termino);
}


```
