/*
En este ejemplo se trata de confeccionar un recibo sencillo, correspondiente
a la compra de unos equipos. Como datos habrá que introducir el tipo de
equipo, indicado mediante un código de un carácter; la cantidad de equipos,
el precio unitario y el tipo de IVA aplicado.
Los subtotales y totales se darán en dolares y céntimos

*/

// Programa: Recibo
// Calcula e impresion de un recibo.

#include <stdio.h>
int main(){

  int cantidad, IVA;
  char codigo;
  float precio, totalIVA, subtotal, total;

  printf("Codigo del producto? ");
  scanf("%c", &codigo);
  printf("Cantidad? ");
  scanf("%d", &cantidad);
  printf("Precio unitario? ");
  scanf("%f", &precio);
  printf("IVa aplicable? ");
  scanf("%d", &IVA);
  subtotal = cantidad * precio;
  totalIVA = subtotal * (IVA) / 100.0;
  total = subtotal + totalIVA;
  printf("\n        Recibo de compra \n\n");
  printf("Cantidad      Concepto        Euros/unidad        Total\n");
  printf("%5d   Producto: %c    %12.2f12.2f \n\n", cantidad, codigo, precio, subtotal);
  printf("%28d%% IVA %12.2f\n\n ", IVA, totalIVA); //se codifica %% para imprimir literalemente un %
  printf("                                  Total: %14.2f\n", total);

  return 0;
}
