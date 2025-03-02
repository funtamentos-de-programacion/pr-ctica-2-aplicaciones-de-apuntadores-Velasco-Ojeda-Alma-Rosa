#include <stdio.h>

// Función para ordenar un arreglo usando el algoritmo de burbuja con apuntadores
void ordenarBurbuja(int *arr, int tamano) {
    for (int i = 0; i < tamano - 1; i++) {
        for (int j = 0; j < tamano - 1 - i; j++) {
            // Si el elemento actual es mayor que el siguiente, se intercambian
            if (*(arr + j) > *(arr + j + 1)) {
                // Intercambio usando un puntero
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[] = {34, 12, 56, 78, 23};
    int tamano = sizeof(arr) / sizeof(arr[0]);  // Calculamos el tamaño del arreglo

    // Llamamos a la función para ordenar el arreglo
    ordenarBurbuja(arr, tamano);

    // Mostramos el arreglo ordenado
    printf("Arreglo ordenado: ");
    for (int i = 0; i < tamano; i++) {
        printf("%d ", *(arr + i));  // Usamos aritmética de punteros para acceder a los elementos
    }
    printf("\n");

    return 0;
}
