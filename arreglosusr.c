/* Matrices tipo entero que pregunta por el número de filas,
posteriormente le pide rellenar la matriz
 y finalmente la dibuja en pantalla */

 #include<stdio.h>
 #include<stdlib.h>

 int main(){
   int matriz[50][50], filas, columnas, i, j;

// Pregunta numero de filas y columnas
   printf("Digite el numero de filas: ");
   scanf("%i", &filas);
   printf("Digite el numero de columnas: ");
   scanf("%i", &columnas);
   printf("\n");
//Llena la matriz
    for(i=0;i<filas;i++){
      for(j=0;j<columnas;j++){
        printf("Digite el numero de la Matriz [%i][%i]: ", i,j);
        scanf("%i ", &matriz [i][j]);
      }
    printf("\n");
  }

//Imprime la matriz
    for (i=0;i<filas;i++){
      for (j=0;j<columnas;j++){
        printf("%i ",matriz[i][j]);
      }
      printf("\n");
    }

   return 0;
 }
