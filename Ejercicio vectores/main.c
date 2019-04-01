#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
#define T 5

int main()
{
    int numeros[T];
    int numeroMayor;
    int valor;
    int indice;

    cargarVector(numeros,T);
    mostrarNumero(numeros,T);

    numeroMayor=buscarMaximo(numeros,T);
    printf("El numero mayor encontrado es: %d",numeroMayor);

    printf("\nIngrese el numero a buscar: ");
    scanf("%d",&valor);


    indice=buscarValor(numeros, T, valor);

    if(indice==-1)
    {
    printf("\nEl numero no se ha encontrado en ningun indice.");
    }
    else
    {
    printf("\nEl numero se encuentra en el indice: %d",indice);
    }

    return 0;
}
