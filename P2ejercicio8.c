#include <stdio.h>

// Función para intercambiar los valores de dos variables
void intercambiar(int *a, int *b) {
    int temp = *a;  // Guardamos el valor de *a en temp
    *a = *b;        // Asignamos el valor de *b a *a
    *b = temp;      // Asignamos el valor guardado en temp a *b
}

int main() {
    int arr[] = {5, 10};

    // Imprimimos los valores antes del intercambio
    printf("Antes del intercambio: arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]);

    // Llamamos a la función de intercambio
    intercambiar(&arr[0], &arr[1]);

    // Imprimimos los valores después del intercambio
    printf("Después del intercambio: arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]);

    return 0;
}
