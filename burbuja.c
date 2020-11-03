// Método burbuja

#include<stdio.h>
#include<stdlib.h>

int main(){
  int array[50];
  int i, j, k, aux;

//Guarda largo de la lista
printf("Escriba la cantidad de elementos de la lista: ");
scanf("%i",&k);

//Captura elementos de la lista
for(i=0;i<k;i++){
  scanf("%i",&array[i]);
}

//Ordena elementos de la lista
  for(i=0;i<k;i++){
    for(j=0;j<k;j++){
      if(array[j]>array[j+1]){
        aux = array[j];
        array[j] = array[j+1];
        array[j+1] = aux;
      }
    }
  }

//Imprime lista orden ascendente
  printf("\nEl orden ascendente es:\n");
  for(i=1;i<=k;i++)
    printf("%i ",array[i]);
  printf("\n");

//Imprime lista orden descendente
printf("\nEl orden descendente es:\n");
for(i=k;i>0;i--)
  printf("%i ",array[i]);
printf("\n");

  getchar();
  return 0;
}
