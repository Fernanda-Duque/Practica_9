#include <stdio.h>
int main ()
{
  int lista[10]; //Se declara e inicia el arreglo unidimensional
  int indice = 0;
  int numeroElementos=0;
  
  printf("\nDa un numero entre 1 y 10 para indicar la cantidad de elementos que tiene el arreglo\n");
  scanf("%d",&numeroElementos);
  if((numeroElementos>=1) && (numeroElementos<=10))
  {
    //Se almacena un numero en cada elementi del arreglo unidimensional usando for
    for(indice = 0; indice <= numeroElementos-1; indice++)
    {
      printf("\nDar un numero enteropara el elemento %d del arreglo", indice);
      scanf("%d",&lista[indice]);
    }
    printf("\nLos valores dados son: \n");
    //Se muestra el numero almacenado en cada elemento del arreglo unidimensional usando for
    for (indice = 0; indice <= numeroElementos-1; indice++)
    {
      printf("%d ", lista[indice]);
    }
  }
  else printf("el valor dado no es valido");
  printf("\n");
  return 0;
}
