/* Ordenamiento por seleccion

Es un algoritmo de ordenamiento que requiere O(n^2)
operaciones para ordenar una lista de numeros.

1. buscar el minimo elemento de la lista
2. intercambiar con el primer elemento
3. buscar el minimo elemento del resto de la lista
4. intercambiar con el segundo elemento
5. y asi sucesivamente
*/
#include<stdio.h>
#include<conio.h>

int main(){
    int a[5] = {3,4,5,1,2};
    int i,j,aux,min;

    for(i=0;i<5;i++){
        min = 1;
        for(j=i+1;j<=i+5;j++){
            if(a[j] < a[min])
                min = j;
        }
        aux = a[i];
        a[i] = a[min];
        a[min] = aux;
    }

    printf("\nAscendente\n");
    for(i=0;i<5;i++)
    	printf("%i ",a[i]);

	    printf("\nDescendente\n");
    for(i=5;i>0;i--)
    	printf("%i ",a[i]);
    	
	getch();
    return 0;
}

