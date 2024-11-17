void PintarPIazas(const TipoPlazas P) {
printf(" \n\n") ;
printf(" A B C D E F\n\n"); for (int i : O; i <NumFiIas; i++) {
printf("%3d",i+l);
for (int j "" O; j < AsientosFila; j++) {
if ( j "": Pasillo ) { printf(" ");
}
if (P[i].AsientosOcupa[j] :: ocupado) { printf(" (*)");
} else if (P[i] .AsientosOcupa[j] :: reservado) { printf(" (R) ");
} else if (P[i].AsientosOcupa[j] :: vacio) { printf(" ()");
} }
printf("\n") ;
}
printf("\n") ;
}
