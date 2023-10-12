/*7.1.1 Ingresar un vector de 10 unidades reales mediante una función llamada CARGA. Luego mediante una
segunda función llamada INVERTIR, generar un segundo vector del mismo tamaño con los elementos ubicados 
en el orden inverso al del vector original. Mostrar el vector invertido con una función llamada MOSTRAR.*/

#include <stdio.h>
#include <stdlib.h>

void CargarVector(int[], int);
void InvertirVector(int[]);

int main () {

    int vec[10];

    void CargarVector(vec, 10);


}

void CargarVector(int vec[], int tam) {

    int i;

    for (i = 0; i < tam; i++)
    {
        printf("Ingrese un numero: \n");
        scanf("%d", &vec[i]);
    }
    
}

void InvertirVector(int vec[], vec) {
    int vec2[10], i;

    for (i = 0; i < vec; i++)
    {
        /* code */
    }
    
}