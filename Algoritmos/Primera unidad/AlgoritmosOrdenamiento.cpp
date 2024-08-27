#include <iostream>
using namespace std;

// Función para realizar el ordenamiento por burbuja
void bubbleSort(int arr[], int n) {
    // Recorremos todo el arreglo varias veces
    for (int i = 0; i < n-1; i++) {
        // Los últimos i elementos ya están ordenados, por lo que no los volvemos a comparar
        for (int j = 0; j < n-i-1; j++) {
            // Si el elemento actual es mayor que el siguiente, los intercambiamos
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];   // Guardamos el valor temporalmente
                arr[j] = arr[j+1];   // Movemos el siguiente elemento a la posición actual
                arr[j+1] = temp;     // Colocamos el elemento actual en la siguiente posición
            }
        }
    }
}

// Función para realizar el Bubble Sort Mejorado
void bubbleSortMejorado(int arr[], int n) {
    int i, j;
    int swapped;

    for (i = 0; i < n-1; i++) {
        swapped = 0; // Inicializamos la variable de intercambio como 0 (falso)
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                // Como se ha establecido un intercambio, marcamos la bandera como 1
                swapped = 1;
            }
        }
        // Si no se realizaron intercambios durante esta pasada, el arreglo ya está ordenado
        if (swapped == 0) {
            break;
        }
    }
}

// Función para fusionar dos sub-arreglos y contar inversiones
int mergeAndCount(int arr[], int temp[], int left, int mid, int right) {
    int i = left;    // Índice para la mitad izquierda
    int j = mid + 1; // Índice para la mitad derecha
    int k = left;    // Índice para el sub-arreglo temporal
    int inv_count = 0;

    // Fusionamos los dos sub-arreglos mientras contamos las inversiones
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            // Cada vez que copiamos un elemento de la mitad derecha,
            // todos los elementos restantes en la mitad izquierda son mayores,
            // lo que cuenta como inversiones.
            inv_count += (mid + 1) - i;
        }
    }

    // Copiamos los elementos restantes de la mitad izquierda, si los hay
    while (i <= mid)
        temp[k++] = arr[i++];

    // Copiamos los elementos restantes de la mitad derecha, si los hay
    while (j <= right)
        temp[k++] = arr[j++];

    // Copiamos el sub-arreglo ordenado de vuelta al arreglo original
    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;
}

// Función recursiva para dividir el arreglo y contar inversiones
int mergeSortAndCount(int arr[], int temp[], int left, int right) {
    int mid, inv_count = 0;
    if (left < right) {
        mid = (left + right) / 2;

        // Conteo de inversiones en la mitad izquierda
        inv_count += mergeSortAndCount(arr, temp, left, mid);

        // Conteo de inversiones en la mitad derecha
        inv_count += mergeSortAndCount(arr, temp, mid + 1, right);

        // Conteo de inversiones durante la fusión
        inv_count += mergeAndCount(arr, temp, left, mid, right);
    }
    return inv_count;
}

// Función principal para contar las inversiones en un arreglo
int countInversions(int arr[], int n) {
    int temp[n];
    return mergeSortAndCount(arr, temp, 0, n - 1);
}

// Función para imprimir un arreglo
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    // Arreglos de ejemplo
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[] = {1, 20, 6, 4, 5};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    // Ejemplo de Bubble Sort
    cout << "Array antes de Bubble Sort: ";
    printArray(arr1, n1);
    bubbleSort(arr1, n1);
    cout << "Array después de Bubble Sort: ";
    printArray(arr1, n1);

    // Ejemplo de Bubble Sort Mejorado
    cout << "\nArray antes de Bubble Sort Mejorado: ";
    printArray(arr1, n1);
    bubbleSortMejorado(arr1, n1);
    cout << "Array después de Bubble Sort Mejorado: ";
    printArray(arr1, n1);

    // Ejemplo de conteo de inversiones usando Merge Sort
    cout << "\nNúmero de inversiones en el array: ";
    int inv_count = countInversions(arr2, n2);
    cout << inv_count << endl;

    return 0;
}
