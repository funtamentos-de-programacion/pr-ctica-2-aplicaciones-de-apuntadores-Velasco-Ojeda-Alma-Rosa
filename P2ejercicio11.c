#include <stdio.h>

int *buscarElemento(int *arr, int tamano, int valor) {
    for (int i = 0; i < tamano; i++) {
        if (*(arr + i) == valor) {
            return (arr + i); // Retorna la dirección del elemento encontrado
        }
    }
    return NULL; // Retorna NULL si no se encuentra el valor
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int tamano = sizeof(arr) / sizeof(arr[0]); // Tamaño del arreglo
    int valorBuscado = 30; // El valor que quieres buscar

    int *direccion = buscarElemento(arr, tamano, valorBuscado);
    if (direccion != NULL) {
        printf("El valor %d se encuentra en la dirección: %p\n", valorBuscado, direccion);
    } else {
        printf("El valor %d no fue encontrado en el arreglo.\n", valorBuscado);
    }

    return 0;
}
