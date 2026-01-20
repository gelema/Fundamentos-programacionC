# 1.1.1 Concepto de computador
La maquina programable por excelencia es el computador. Un computador se define como una maquina 
programable para tratamiento de la información, es decir un computador es (!obviamente) una maquina para realizar cómputos.


## 1.1.2 Programación
La labor de desarrollar programas se denomina en general __programación__. En realidad este termino se suele reservar para designar las tareas de desarrollo de programas en pequeña escala, es decir, realizadas por una sola persona. El desarrollo de programas complejos, que son la mayoría de los IlSadOS actualmente, exige un equipo más o menos numeroso de personas que debe trabajar de manera organizada. La.'l técnicas para desarrollo de software a gran escala constituyen la ingeniería de software.

Programación e ingeniería de software no son disciplinas independientes, sino complementarias. El desarrollo de software en gran escala consiste esencialmente en descomponer el trabajo total de programación en partes independientes que pueden ser desarrolladas por miembros individuales del equipo.
La ingeniería de software se limita a añadir técnicas o estrategias organizativas a las técnicas básicas de programación. 
El __trabajo en equipo__ es, en último extremo, la suma de los trabajos realizados por los individuos.

## 1.1.3 Objetivos de programación
La ingeniería de software excede del ámbito de este libro.
No obstante las técnicas de programación han de establecerse con el objetivo de ser una base adecuada para la ingeniería de software. Entre los objetivos particulares de la programación podemos reconocer los siguientes:

__* Corrección:__ Es evidente que un programa debe realizar el tratamiento esperado, y no producir resultados erróneos.
Esto tiene una consecuencia inmediata que no siempre se considera evidente: 
Antes de desarrollar software se debe especificar con toda claridad cual es el funcionamiento esperado. Sin dicha especificación es inútil hablar de funcionamiento correcto.
__* Claridad:__
Prácticamente todos los programas han de ser modificados
después de haber sido desarrollados inicialmente. Por esta razón es fundamental 
que sus descripciones sean claras y fácilmente inteligibles por
otras personas distintas de su autor, o incluso por el mismo autor al cabo
de un cierto tiempo, cuando ya ha olvidado los detalles del programa.

__* Eficiencia:__
Una tarea de tratamiento de información puede ser programada de muy diferentes maneras sobre un computador determinado, es decir, habrá muchos programas distintos que producirán los resultados deseados. Algunos de estos programas serán más eficientes que otros.
Los programas eficientes aprovecharán mejor los recursos disponibles y, por tanto, su empico será más económico en algún sentido.

## 1.2 Lenguaje de programación

El computador funciona bajo una serie de instrucciones llamado programa el cual debe estar almacenado en la unidad de memoria, en cual se contiene una descripcion codificada del comportamiento deseado del computador.
Cada modelo de computador podrá utilizar una forma particular la codificación de programas, que no coincidirá con las de los otros modelos. La forma codificar programas de una maquina particular se dice que es su *codigo de maquina o lenguaje de maquina.
Un programa codificado en el lenguaje de un modelo de maquina no podra ser ejecutado, en general, en otro distinto. Si queremos que un programa funcione en diferentes maquinas tendremos que preparar versiones particulares en el lenguaje de maquina de cada uno de ellas. Evidentemente con ellos se multiplica el costo de desarrollo si cada version se prepara de manera independiente.
<br>
Por otra parte, los programas en codigo de maquina son extraordinariamente dificiles de leer por una persona. Normalmente contiene codigos numericos sin ningun sentido nemotecnico, y compuestos por millones de operaciones elementales muy sencillas que en conjunto pueden realizar los tratamientos complejos que vemos a diario.

## Fragmento de programa en codigo maquina
```c
88 94 SO FF 76 OA FF 76 08 9A BA en 3A 16 B8 01
00 EB E8 B8 88 94 50 28 CO 50 9A FA es 3A 16 EH
EO B8 88 94 50 BS 01 00 EB EF B8 88 94 50 9A 48
DI 3A 16 ES D9 SD CA DA 00 55 8H Ee 83 Ee 08 57
56 B8 01 00 50 9A 97 41 9B 34 8B 08 8B 47 14 89
```

Para facilitar la tarea de programacion resulta muy deseable disponer de formas de representacion de los programas que sean adeacuados para ser leidas o escritas por personas.
En particular los *lenguajes de programacion* sirven precisamente pare representar programas de manera simbolica, en forma de un texto que pueda ser leido con relativa facilidad por una persona.

```c
void PintarPlazas(const TipoPlazas){
    printf("\n\n");
    printf("    A   B   C   D   E   F\n\n");
for(int i = 1; i < NumFilas; i++){
    printf("%3d",i+1);
    for(int j = 0;  j < AsientosFilas; j++){
        if(j === pasillo){
            printf("    ");        
        }
        if(P[i].AsientosOcupa[j] == ocupado){
            printf("   (*)");
        }else if(P[i].AsientosOcupa[j]  == reservado){
            printf("  (R) ");
        }else if (P[i].AsientosOcua[j] == vacio){
            printf("   ()");
        }
    }
    printf("\n");
    
}
printf("\n");
}
```
En comparacion con el primer fragmento de lenguaje maquina este es mas facil de leer pone de manifiesto sin necesidad de mas explicaciones la ventaja de usar lenguajes de programacion simbolicos.

# 1.3 Copilar o interpretar
Un programa escrito en un lenguaje de programacion puede ser ejecutado en computadores muy diferentes.Pero para ello se necesita un programa especial llamado compilador o interpretador.
Estos programas para manipular representaciones de programas los denominaremos *procesadores de lenguaje*.

Un procesador de lenguaje puede ser un compilador o un interpretador. Un compilador traduce el programa completo a codigo maquina antes de ejecutarlo, mientras que un interpretador ejecuta el programa linea por linea.

Un __*compilador*__ es un programa que traduce el programa completo a codigo maquina antes de ejecutarlo.
A la representacion de un programa en codigo maquina se le llama *codigo fuente*, y su representacion en codigo maquina se le llama *codigo objeto*.
La ejecucion de un programa mediante el copilador se realiza en dos pasos separadas: 
__Primero__ se compila el programa simbolico a codigo de maquina mediante el programa compilador.

__Segundo__ se ejecuta etapa el programa en codigo maquina y se procesa los datos y resultados particulares.
Una vez compilado el programa, se puede ejecutar en cualquier computador que tenga el mismo sistema operativo y arquitectura de procesador las veces que sea necesario.

<br>
    
Un __*interpretador*__ es un programa que analiza dictamente la descripcion de un programa en codigo fuente y realiza 
la operacines necesarias para ejecutarlo. El interprete debe contener de el los fragmentos de codigo maquina de todas las operaciones necesarias que se puedan usar en el lenguaje de programacion simbolico.
Puede decirse que el interprete (simula) una *maquina virtual* cuyo lenguaje de maquina coincide con el lenguaje fuente del programa.

Un inteprete se comporta como una maquina virtual cuyo lenguaje es el mismo que el lenguaje fuente del programa.
El proceso de un programa mediante interprete se limita a ejecutar directamente el programa en la maquina virutal, es decir sobre el interprete.
El proceso mediante interprete es mas sencillo, en conjunto que mas eficiente que el proceso mediante compilador.
Su principal inconveniente es que la velocidad de ejecucion es menor que la de un compilador.

# Modelos abstractos
Los lenguajes de programación permiten describir programas o computos de manera formal, y por lo tanto simbólica y rigurosa.
Si de un conjunto de lenguajes de programación basados en elementos computacionales similares extraemos conceptos comunes, obtendremos un *modelo abstracto de computación.* Este modelo abstracto recoge los elementos basicos y formas de combinacion de una manera abtracta, prescidiendo de la notacion concreta usada en cada lenguaje de programación para representarlos.
Existen varios modelos abstractos de computo o modelos de programcion, como el modelo de Turing, el modelo de lambda-calculo, el modelo de Petri, que subyacen en los lenguajes de programacion actuales.
Entre ellos estan la *programacion funcional, programacion logica, programacion imperativa,  modelos de flujo de dato, programacion orientada a objetos, etc.
Todos estos modelos son modelos universales, que permiten describir computos de manera abstracta y rigurosa, independientemente de la notacion concreta usada en cada lenguaje de programación.

El modelo de programacionimperativa es el mas extendido y eso induce a quienes empiezan a estudiar informatica a identificar el concepto de programa con el de secuencia o lista de ordenes .
# 1.3.1 Modelo funcional
