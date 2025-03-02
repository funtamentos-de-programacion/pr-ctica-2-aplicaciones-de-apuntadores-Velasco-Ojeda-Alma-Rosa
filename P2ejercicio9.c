#include <stdio.h>

int sumaArreglo(int *arr, int tamano) {
    int suma = 0;
    for (int i = 0; i < tamano; i++) {
        suma += *(arr + i); // Usando el apuntador para acceder a los elementos
    }
    return suma;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int tamano = sizeof(numeros) / sizeof(numeros[0]); // Tamaño del arreglo
    int resultado = sumaArreglo(numeros, tamano);
    printf("La suma de los elementos del arreglo es: %d\n", resultado);
    return 0;
}
