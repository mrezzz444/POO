#include <iostream>
#include <vector>

#define MAX 50
typedef int tipoDato;

class Ordena {
private:
    tipoDato array[MAX]; // Arreglo de datos
    unsigned short int size_C; // Tamaño del arreglo

public:
    // Constructor
    Ordena() : size_C(0) {}

    // Función para crear el arreglo
    bool crear(unsigned short int tam) {
        if (tam > MAX) {
            std::cerr << "Tamaño excede el límite.\n";
            return false;
        }
        size_C = tam;
        for (int i = 0; i < size_C; ++i) {
            std::cout << "Ingresa un número: ";
            std::cin >> array[i];
        }
        return true;
    }

    // Función para limpiar el arreglo
    void clear() {
        size_C = 0;
    }

    // Función para verificar si el arreglo está lleno
    bool llena() const {
        return size_C == MAX;
    }

    // Algoritmo de burbuja
    bool burbuja() {
        if (size_C == 0) return false;
        for (int i = 0; i < size_C - 1; ++i) {
            for (int j = 0; j < size_C - i - 1; ++j) {
                if (array[j] > array[j + 1]) {
                    std::swap(array[j], array[j + 1]);
                }
            }
        }
        return true;
    }

    // Algoritmo de inserción
    bool insercion() {
        if (size_C == 0) return false;
        for (int i = 1; i < size_C; ++i) {
            int key = array[i];
            int j = i - 1;
            while (j >= 0 && array[j] > key) {
                array[j + 1] = array[j];
                --j;
            }
            array[j + 1] = key;
        }
        return true;
    }

    // Algoritmo QuickSort
    bool quicksort(int left, int right) {
        if (left >= right) return false;
        int pivot = array[(left + right) / 2];
        int i = left, j = right;
        while (i <= j) {
            while (array[i] < pivot) i++;
            while (array[j] > pivot) j--;
            if (i <= j) {
                std::swap(array[i], array[j]);
                i++;
                j--;
            }
        }
        if (left < j) quicksort(left, j);
        if (i < right) quicksort(i, right);
        return true;
    }

    // Función para imprimir el arreglo
    void imprimir() const {
        for (int i = 0; i < size_C; ++i) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Ordena ordena_obj;
    
    // Crear un arreglo de tamaño 5
    if (ordena_obj.crear(5)) {
        std::cout << "Arreglo antes de ordenar:\n";
        ordena_obj.imprimir();

        // Ordenar usando burbuja
        ordena_obj.burbuja();
        std::cout << "Arreglo después de burbuja:\n";
        ordena_obj.imprimir();
    }

    return 0;
}
