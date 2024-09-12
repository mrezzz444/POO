// #include <iostream>
// using namespace std;

// class Ordenamiento
// {

// private:
//     int arreglo[10];
//     int tamaño;

//     // Función auxiliar para Quick Sort
//     int particionar(int inicio, int fin)
//     {
//         int pivote = arreglo[fin];
//         int i = (inicio - 1);
//         for (int j = inicio; j < fin; j++)
//         {
//             if (arreglo[j] < pivote)
//             {
//                 i++;
//                 swap(arreglo[i], arreglo[j]);
//             }
//         }
//         swap(arreglo[i + 1], arreglo[fin]);
//         return (i + 1);
//     }

//     // Función auxiliar para Quick Sort
//     void ordenamientoRapido(int inicio, int fin)
//     {
//         if (inicio < fin)
//         {
//             int pi = particionar(inicio, fin);
//             ordenamientoRapido(inicio, pi - 1);
//             ordenamientoRapido(pi + 1, fin);
//         }
//     }

//     // Función auxiliar para Merge Sort
//     void fusionar(int inicio, int mitad, int fin)
//     {
//         int tamañoIzquierda = mitad - inicio + 1;
//         int tamañoDerecha = fin - mitad;
//         int *izquierda = new int[tamañoIzquierda];
//         int *derecha = new int[tamañoDerecha];

//         for (int i = 0; i < tamañoIzquierda; i++)
//             izquierda[i] = arreglo[inicio + i];
//         for (int j = 0; j < tamañoDerecha; j++)
//             derecha[j] = arreglo[mitad + 1 + j];

//         int i = 0;
//         int j = 0;
//         int k = inicio;
//         while (i < tamañoIzquierda && j < tamañoDerecha)
//         {
//             if (izquierda[i] <= derecha[j])
//             {
//                 arreglo[k] = izquierda[i];
//                 i++;
//             }
//             else
//             {
//                 arreglo[k] = derecha[j];
//                 j++;
//             }
//             k++;
//         }

//         while (i < tamañoIzquierda)
//         {
//             arreglo[k] = izquierda[i];
//             i++;
//             k++;
//         }

//         while (j < tamañoDerecha)
//         {
//             arreglo[k] = derecha[j];
//             j++;
//             k++;
//         }

//         delete[] izquierda;
//         delete[] derecha;
//     }

//     // Función auxiliar para Merge Sort
//     void ordenamientoPorFusion(int inicio, int fin)
//     {
//         if (inicio < fin)
//         {
//             int mitad = inicio + (fin - inicio) / 2;
//             ordenamientoPorFusion(inicio, mitad);
//             ordenamientoPorFusion(mitad + 1, fin);
//             fusionar(inicio, mitad, fin);
//         }
//     }

// public:
//     // Constructor que recibe un arreglo y su tamaño
//     Ordenamiento(int arregloEntrada[], int tamañoArreglo)
//     {
//         tamaño = tamañoArreglo;
//         for (int i = 0; i < tamaño; i++)
//         {
//             arreglo[i] = arregloEntrada[i]; // Copiamos los valores del arreglo pasado como parámetro
//         }
//     }

//     // Método para realizar el Bubble Sort
//     void ordenamientoBurbuja()
//     {
//         for (int i = 0; i < tamaño - 1; i++)
//         {
//             for (int j = 0; j < tamaño - i - 1; j++)
//             {
//                 if (arreglo[j] > arreglo[j + 1])
//                 {
//                     // Intercambiar arreglo[j] y arreglo[j+1]
//                     int temp = arreglo[j];
//                     arreglo[j] = arreglo[j + 1];
//                     arreglo[j + 1] = temp;
//                 }
//             }
//         }
//     }

//     // Método para realizar el Bubble Sort mejorado
//     void ordenamientoBurbujaMejorado()
//     {
//         bool intercambiado;
//         for (int i = 0; i < tamaño - 1; i++)
//         {
//             intercambiado = false;
//             for (int j = 0; j < tamaño - i - 1; j++)
//             {
//                 if (arreglo[j] > arreglo[j + 1])
//                 {
//                     // Intercambiar arreglo[j] y arreglo[j+1]
//                     int temp = arreglo[j];
//                     arreglo[j] = arreglo[j + 1];
//                     arreglo[j + 1] = temp;
//                     intercambiado = true;
//                 }
//             }
//             // Si no se realizó ningún intercambio, el arreglo ya está ordenado
//             if (!intercambiado)
//             {
//                 break;
//             }
//         }
//     }

//     // Método para realizar el Insertion Sort
//     void ordenamientoInsercion()
//     {
//         for (int i = 1; i < tamaño; i++)
//         {
//             int clave = arreglo[i];
//             int j = i - 1;
//             // Mueve los elementos mayores a la derecha
//             while (j >= 0 && arreglo[j] > clave)
//             {
//                 arreglo[j + 1] = arreglo[j];
//                 j--;
//             }
//             arreglo[j + 1] = clave; // Inserta la clave en su posición correcta
//         }
//     }

//     // Método para realizar el Quick Sort
//     void ordenamientoRapido()
//     {
//         ordenamientoRapido(0, tamaño - 1);
//     }

//     // Método para realizar el Merge Sort
//     void ordenamientoPorFusion()
//     {
//         ordenamientoPorFusion(0, tamaño - 1);
//     }

//     // Método para imprimir el arreglo
//     void imprimirArreglo()
//     {
//         for (int i = 0; i < tamaño; i++)
//         {
//             cout << arreglo[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main()
// {
//     // Definimos un arreglo de ejemplo
//     int arreglo[] = {5, 1, 4, 2, 8};
//     int tamaño = sizeof(arreglo) / sizeof(arreglo[0]); // Calculamos el tamaño del arreglo

//     // Creamos un objeto de la clase Ordenamiento y le pasamos el arreglo
//     Ordenamiento ordenar(arreglo, tamaño);

//     // Imprimimos el arreglo original
//     cout << "Arreglo original: ";
//     ordenar.imprimirArreglo();

//     // Llamamos al método ordenamientoBurbuja para ordenar el arreglo
//     ordenar.ordenamientoBurbuja();
//     cout << "Arreglo ordenado con Bubble Sort: ";
//     ordenar.imprimirArreglo();

//     // Restablecemos el arreglo original
//     int arreglo2[] = {5, 1, 4, 2, 8};
//     Ordenamiento ordenar2(arreglo2, tamaño);

//     // Llamamos al método ordenamientoBurbujaMejorado para ordenar el arreglo
//     ordenar2.ordenamientoBurbujaMejorado();
//     cout << "Arreglo ordenado con Bubble Sort Mejorado: ";
//     ordenar2.imprimirArreglo();

//     // Restablecemos el arreglo original
//     int arreglo3[] = {5, 1, 4, 2, 8};
//     Ordenamiento ordenar3(arreglo3, tamaño);

//     // Llamamos al método ordenamientoInsercion para ordenar el arreglo
//     ordenar3.ordenamientoInsercion();
//     cout << "Arreglo ordenado con Insertion Sort: ";
//     ordenar3.imprimirArreglo();

//     // Restablecemos el arreglo original
//     int arreglo4[] = {5, 1, 4, 2, 8};
//     Ordenamiento ordenar4(arreglo4, tamaño);

//     // Llamamos al método ordenamientoRapido para ordenar el arreglo
//     ordenar4.ordenamientoRapido();
//     cout << "Arreglo ordenado con Quick Sort: ";
//     ordenar4.imprimirArreglo();

//     // Restablecemos el arreglo original
//     int arreglo5[] = {5, 1, 4, 2, 8};
//     Ordenamiento ordenar5(arreglo5, tamaño);

//     // Llamamos al método ordenamientoPorFusion para ordenar el arreglo
//     ordenar5.ordenamientoPorFusion();
//     cout << "Arreglo ordenado con Merge Sort: ";
//     ordenar5.imprimirArreglo();

//     return 0;
// }
