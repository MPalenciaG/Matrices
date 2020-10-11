/* Arreglos bidimensionales (Matrices)

-Matrices enteros
-Matrices flotantes
-Matrices caracacteres

*/
#include<stdio.h>

int main(){
  int matriz [2][3] = {{1,2,3},{4,5,6}};
  int x,y;

  for (x=0;x<2;x++){
    for (y=0;y<3;y++){
      printf("Digite un numero de Matriz [%i][%i]:\n", x+1,y+1);
      scanf("%i ",&matriz[x][y]);
    }
  }

  for (x=0;x<2;x++){
    for (y=0;y<3;y++){
      printf("%i ",matriz[x][y]);
    }
    printf("\n");
  }
  getchar();
  return 0;
}

