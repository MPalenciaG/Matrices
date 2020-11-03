// Método de ordenamiento por inserción

//librerias
#include<stdio.h>
#include<stdlib.h>

int main(){
  int a[50];
  int i, j, k, aux, pos;

//Guarda largo de la lista
  printf("Escriba la cantidad de elementos de la lista: ");
  scanf("%i",&k);

//Captura elementos de la lista
  for(i=0;i<k;i++){
    scanf("%i",&a[i]);
  }

//Algoritmo ordenamiento
  for(i=0;i<k;i++){
    pos = i;
    aux = a[i];
    while((pos > 0) && ( aux < pos-1)){
      a[pos] = a[pos-1];
      pos--;
    }
    a[pos] = aux;
  }

//Imprime lista orden ascendente
  printf("\nEl orden ascendente es:\n");
  for(i=0;i<k;i++)
    printf("%i ",a[i]);
  printf("\n");

//Imprime lista orden descendente
printf("\nEl orden descendente es:\n");
for(i=k-1;i>=0;i--)
  printf("%i ",a[i]);
printf("\n");

  return 0;
}
