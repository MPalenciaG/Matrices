/* Arreglos bidimensionales (Matrices)

-Matrices enteros
-Matrices flotantes
-Matrices caracacteres

*/
#include<stdio.h>
#include<stdlib.h>

int main(){
  int matriz [2][3] = {1,2,3,4,5,6};
  int x,y;

  for (x=0;x<2;x++){ //bucle para cada fila
    for (y=0;y<3;y++){ //bucle para cada columna
      printf("Digite un numero de Matriz [%i][%i]:\n", x+1,y+1);
      scanf("%i", &matriz [x][y]);
    }
    printf("\n");
  }

  for (x=0;x<2;x++){
    printf("( ");
    for (y=0;y<3;y++){
      printf(" %i ",matriz[x][y]);
    }
    printf(" )\n");
  }
  getchar();
  return 0;
}
