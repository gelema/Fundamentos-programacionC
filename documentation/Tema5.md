# Programación Estructurada
## Secuencia
La estructura mas sencilla para emplear en la descomposicion es utilizar una secuencia de acciones
o partes que se ejecutan de formas sucesiva.
La estructura secuencial ya ha sido utilizada en los ejemplos realizadas en los temas anteriores.
Todos ellos han sido resueltos como una secuencia de sentencias del lenguaje.

## Seleccion
La estructura de seleccion consiste en ejecutar una accion y otra, dependiendo de una determinada condicion
que se analiza a la entrada de la estructura. Si condiccion analiza da como resultado "SI"  se realiza la
accion A y si el resultado es "NO" se realiza la accion "B". Como se puede observar solo tiene una unica y
una unica salida.

Structure if
```sh
//formato if

if( Condicion){
    Acción A
} else {
    Acción B
}
```

Las palabras clave __if__ y __else__ separan las distintas partes de la sentencia. Por ejemplo:
```c
#include <stdio.h>

int main(){
    int largo, ancho, ladoMayor;
    if(largo > ancho){
        ladoMayor = largo;
    } else{
        ladoMayor = ancho;
    }

    return 0;
}

```

## Iteracion
La iteracion es la repeticion de una accion mientras que se cumpla una determina condicion.
La estructura de iteraciones mas general es aquella en que la condicion se analiza a la entrada de la estructura
y antes de iniciar cada nueva repeticion.

## Estructuras Anidadas
Cualquier parte o acción del programa puede a su vez estar constituida por cualquiera de las esctructuras descritas.
Por lo tanto, el anidamiento entre ellas puede ser tan complejos como se necesario.
Mediante la tecnica de ___refinamiento sucesivos___ de definen inicialmente las estructuras mas externas del programa y en los
pasos sucesivos se va detallando la estructura de cada accion compuesta. Este proceso finalmente da lugar a que todo el programa
quede escrito utilizando las estructuras básicas descritas en este apartado, anidados unas dentro de ellas.


## Caso 1
Tal como se indico anteriormente, es posible anidar varias estructuras de seleccion unas dentro de otras.
Asi, se podria realizar esta seleccion de la siguiente forma:
```c
//if example
if(edad < 6){
    tarifa = 0.0;
} else {
    if(edad < 18){
        tarifa = 0.5;
    } else {
        if(edad < 65){
            tarifa = 1.0;
        } else {
            tarifa = 0.25;
        }
    }
}
```

El formato de la sentencia __if__ para selección en cascada es la siguiente:
```c
if(Condicion A){
    Acción A
} else if( Condición B){
    Acción B
} else if( Condición N){
    Acción j
} else {
    Acción k
}
``

Con esta estructura anterior se escribe en __c__ de la siguiente manera:
```c
if(edad < 6){
    taridas = 0.0;
} else if(edad < 18){
    tarifa = 0.5;
} else if(edad < 65){
    tarifa = 1.0;
} else {
tarifa = 0.25;
}
```

## Sentencia WHILE
En __c__ la estructura de iteración se consigue mediante la sentencia WHILE, que tiene el siguiente formato:
```c
while( Condición){
    Acción
}
```


El significado es que mientras la expresión Condición resulta cierta, se ejecuta la Acción de forma repetitiva.
Cuando el resultado cs falso finaliza la ejecución de la sentencia. Si la Condición rcsulta falsa en la primera
evaluación, la Acción no se ejecuta nunca.
Por ejemplo, el factorial de un número n se puede calcular mediante la fórmula habitual:

n!= 1x2x3x4x...xn

Este cálculo se puede programar en __c__ utiliza una sentencia WHILE de la siguiente forma:
```c
factorial = 1;
while (n > 1){
    factorial = factorial * n;
    n--;
}
```

Así, con la sentencia de autodecremento la variable n va disminuyendo su valor de uno en uno en cada repetición del bucle,
al tiempo que esos valores se van multiplicando sucesivamente, guardando el producto acumulado en factorial,
hasta que n se reduce a 1. Si inicialmente el valor de n es igual o menor que 1, no se ejecutan nunca las sentencias
dentro del bucle, por lo que la variable factorial termina con el mismo valor inicial igual a 1.
