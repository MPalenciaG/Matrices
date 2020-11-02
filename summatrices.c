// suma de Matrices
#include<stdio.h>
#include<stdlib.h>

int filas, columnas;

void sumar(int a[50][50], int b [50][50]);

int main(){
  int matriz1[50][50];
  int matriz2[50][50];
  int i=0,j=0;

  // Pregunta numero de filas y columnas
    printf("Matriz 1\n");
     printf("Digite el numero de filas: ");
     scanf("%i", &filas);
     printf("Digite el numero de columnas: ");
     scanf("%i", &columnas);
     printf("\n");
  //Llena la matriz1
      for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
          printf("Digite el numero de la Matriz [%i][%i]: ", i,j);
          scanf("%i", &matriz1 [i][j]);
        }
      printf("\n");
    }

    // Pregunta numero de filas y columnas
      printf("Matriz 2\n");
       printf("Digite el numero de filas: ");
       scanf("%i", &filas);
       printf("Digite el numero de columnas: ");
       scanf("%i", &columnas);
       printf("\n");
    //Llena la matriz1
        for(i=0;i<filas;i++){
          for(j=0;j<columnas;j++){
            printf("Digite el numero de la Matriz [%i][%i]: ", i,j);
            scanf("%i", &matriz2 [i][j]);
          }
        printf("\n");
      }

  sumar (matriz1, matriz2);

  return 0;
}

void sumar(int a[50][50], int b [50][50]){
  int suma[50][50];
  int i,j;

  for(i=0;i<filas;i++)
    for(j=0;j<columnas;j++){
      suma[i][j] = a[i][j] + b[i][j];
      }

  for(i=0;i<filas;i++){
    printf(" ( ");
    for(j=0;j<columnas;j++){
      printf(" %i ",suma[i][j]);
      }
    printf(" ) \n");
  }
}
